//
// Created by Sarah Orsak on 10/21/2019.
//

#include "UtPod.h"
using namespace std;

//Default constructor
//set the memory size to MAX_MEMORY
UtPod::UtPod(){
     songs = nullptr;
     memSize = MAX_MEMORY;
}


//Constructor with size parameter
//The user of the class will pass in a size.
//If the size is greater than MAX_MEMORY or less than or equal to 0,
//set the size to MAX_MEMORY.
UtPod::UtPod(int size){
     songs = nullptr;
     if (size > MAX_MEMORY || size <= 0){
        memSize = MAX_MEMORY;
    }
    else{
        memSize = size;
    }
}


/* FUNCTION - int addSong
 * attempts to add a new song to the UtPod
     o returns a 0 if successful
     o returns -1 if not enough memory to add the song

 precondition: s is a valid Song

 input parms - reference to a Song to be added

 output parms - returns whether adding song was successful or not
*/

int UtPod::addSong(Song const &s){
    if (s.getSize() <= getRemainingMemory()){
        auto *newNode = new SongNode;
        newNode->s = s;
        newNode->next = songs;
        songs = newNode;
        return SUCCESS;
    }
    else{
        return NO_MEMORY;
    }
}


/* FUNCTION - int removeSong
 * attempts to remove a song from the UtPod
 * removes the first instance of a song that is in the the UtPod multiple times
     o returns 0 if successful
     o returns -1 if nothing is removed


   input parms - reference to a Song to be removed

   output parms - returns whether removing song was successful or not
*/

int UtPod::removeSong(Song const &s){
    SongNode *current = songs;
    SongNode *prev = nullptr;

    if (songs == nullptr){
        return NOT_FOUND;
    }
    else{
        //while the node isn't null and isn't equal to song
        while((current != nullptr) && !(current->s == s)){
                prev = current;
                current = current -> next;
        }
        //if its the first one in the linked list
        if (prev == nullptr){
            songs = current->next;
            delete current;
            return SUCCESS;
        }
        //if its in the list, free it 
        else if (current != nullptr) {
            prev->next = current->next;
            delete current;
            return SUCCESS;
        }
    }
    //if not found in the list
    return NOT_FOUND;
}


/* FUNCTION - void shuffle
 *  shuffles the songs into random order
    o will do nothing if there are less than two songs in the current list

   input parms - none

   output parms -none
*/

void UtPod::shuffle(){

}


/* FUNCTION - void showSongList
 * prints the current list of songs in order from first to last to standard output
 * format - Title, Artist, size in MB (one song per line)

   input parms - none

   output parms - no output, but prints the Title, Artist, Size of each song in the UTPod
*/

void UtPod::showSongList(){
    SongNode *current = songs;
    while (current != nullptr){
        cout << current->s.getTitle() << ","
        << current->s.getArtist() << ","
        << current->s.getSize() << endl;
        current = current->next;
    }
}


/* FUNCTION - void sortSongList
 *  sorts the songs in ascending order
    o will do nothing if there are less than two songs in the current list

   input parms - none

   output parms - none
*/

void UtPod::sortSongList(){

}


/* FUNCTION - void clearMemory
 * clears all the songs from memory

   input parms -none

   output parms -none
*/
void UtPod::clearMemory(){
    SongNode *current = songs;
    SongNode *next;
    
    while (current != nullptr){
        next = current->next;
        delete current;
        current = next;
    }
    songs = nullptr;
}


/* FUNCTION - int getRemainingMemory
 *  returns the amount of memory available for adding new songs

   input parms - none

   output parms - returns the remaining memory in the UTPod
*/

int UtPod::getRemainingMemory(){
    int totalMem = 0;
    int remainingMem = 0;
    SongNode *current = songs;

    while (current != nullptr){
        totalMem = totalMem + current->s.getSize();
        current = current->next;
    }
    
    remainingMem = memSize - totalMem;
    return remainingMem;
}

UtPod::~UtPod(){
    //destructor
}


