#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Media {
public:
    virtual void play() = 0;
    virtual ~Media() = default;
};

class Audio : public Media {
public:
    void play() override {
        cout << "Playing audio" << endl;
    }
};

class Video : public Media {
public:
    void play() override {
        cout << "Playing video" << endl;
    }
};

int main() {
    vector<std::unique_ptr<Media>> media;
    media.push_back(std::make_unique<Audio>());
    media.push_back(std::make_unique<Video>());
    for (auto& m : media) {
        m->play();
    }
    return 0;
}