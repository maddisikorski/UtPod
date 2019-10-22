//
// Created by Sarah Orsak on 10/21/2019.
//

#include "Song.h"
using namespace std;


Song::Song(){
    title = "";
    artist = "";
    size = 0;
}

Song::Song(string _title, string _artist, int _size){
    title = _title;
    artist = _artist;
    size = _size;
}

void Song::setTitle(string _title)
{
    title = _title;
}

void Song::setArtist(string _artist)
{
    artist = _artist;
}

void Song::setSize(int _size)
{
    size = _size;
}

string Song::getTitle() const
{
    return title;
}

string Song::getArtist() const
{
    return artist;
}

int Song::getSize() const
{
    return size;
}

bool Song::operator==(const Song &b){
    return (title== b.title &&
            artist== b.artist &&
            size == b.size);
}

bool Song::operator<(const Song &b){
    if (artist != b.artist){
        return (artist < b.artist);
    }
    else if (title != b.title){
        return (title < b.title);
    }
    else if (size != b.size){
        return (size < b.size);
    }
    else {
        return false;
    }
}
bool Song::operator>(const Song &b){
    if (artist != b.artist){
        return (artist > b.artist);
    }
    else if (title != b.title){
        return (title > b.title);
    }
    else if (size != b.size){
        return (size > b.size);
    }
    else {
        return false;
    }

}