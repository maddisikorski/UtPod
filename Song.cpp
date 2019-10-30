//
// Created by Sarah Orsak on 10/21/2019.
//

#include "Song.h"
using namespace std;

Song::Song(){
    artist = "";
    title = "";
    size = 0;
}


Song::Song(string _artist, string _title, int _size){
    artist = _artist;
    title = _title;
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

bool Song::operator==(const Song &s){
    return (title== s.getTitle() &&
            artist== s.getArtist() &&
            size == s.getSize());
}

bool Song::operator<(const Song &s){
    if (artist != s.getArtist()){
        return (artist < s.getArtist());
    }
    else if (title != s.getTitle()){
        return (title < s.getTitle());
    }
    else if (size != s.getSize()){
        return (size < s.getSize());
    }
    else {
        return false;
    }
}
bool Song::operator>(const Song &s){
    if (artist != s.getArtist()){
        return (artist > s.getArtist());
    }
    else if (title != s.getTitle()){
        return (title > s.getTitle());
    }
    else if (size != s.getSize()){
        return (size > s.getSize());
    }
    else {
        return false;
    }
}