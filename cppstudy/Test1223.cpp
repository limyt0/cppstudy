#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Movie {
    string title;
    double rating;
};

class MovieProcessor {
public:
    virtual void process(vector<Movie>& movies) = 0;
    virtual ~MovieProcessor() {};
};


class MovieManager {
private:
    vector<Movie> movies;
    map<string, double> movieMap;

public:
    MovieManager() {
        movies = {
            {"Inception", 9.0},
            {"Interstellar", 8.6},
            {"The Dark Knight", 9.1},
            {"Memento", 8.4}
        };

        for (const auto& movie : movies) {
            movieMap[movie.title] = movie.rating;
        }
    }

    void printMovies() {
        cout << "영화 목록:\n";
        for (const auto& movie : movies) {
            cout << "제목: " << movie.title << ", 평점: " << movie.rating << "\n";
        }
    }

    void findMovie(const string& title) {
        auto it = movieMap.find(title);
        if (it != movieMap.end()) {
            cout << "영화 제목: " << it->first << ", 평점: " << it->second << "\n";
        }
        else {
            cout << "해당 영화는 목록에 없습니다.\n";
        }
    }

    // MovieProcessor를 사용하여 기능 확장
    void processMovies(MovieProcessor& processor) {
        processor.process(movies);
    }

};


bool compareMovies(const Movie& a, const Movie& b) {
    if (a.rating == b.rating) {
        return a.rating < b.rating;
    }
    return  a.rating < b.rating;
}
class RatingSorter : public MovieProcessor {
public:
    void process(vector<Movie>& processor) {
        sort(processor.begin(), processor.end(), compareMovies);
        cout << "평점 내림차순 정렬 영화 목록:" << endl;
        for (const auto& movie : processor) {
            cout << "제목: " << movie.title << ", 평점: " << movie.rating << endl;
        }
    }

};

class RatingFilter : public MovieProcessor {
private:
    double minRating;

public:
    explicit RatingFilter(double minRating) : minRating(minRating) {}

    void process(vector<Movie>& movies) {
        cout << "평점 " << minRating << " 이상인 영화 목록:\n";
        for (const auto& movie : movies) {
            if (movie.rating >= minRating) {
                cout << "제목: " << movie.title << ", 평점: " << movie.rating << "\n";
            }
        }
    }
};

int main1223() {
    MovieManager manager;

    cout << "1. 영화 목록 출력\n";
    manager.printMovies();

    cout << "\n2. 영화 검색 (예: Interstellar)\n";
    manager.findMovie("Interstellar");

    cout << "\n3. 평점 기준 정렬 및 출력\n";
    RatingSorter sorter;
    manager.processMovies(sorter);

    cout << "\n4. 평점 8.5 이상인 영화 필터링 및 출력\n";
    RatingFilter filter(8.5);
    manager.processMovies(filter);

    return 0;
}
