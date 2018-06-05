#pragma once
// Uses a circular array
// aka, One ring to rule them all

class Window {
  private:
    char* array;
    int head;
    int tail;
    int split;
    int windowCap;
    int dictCap;
    int labCap;
    int windowSize;
    int dictSize;
    int labSize;
  public:
    Window(int windowCap, int labCap, const char* initChars, int initCharsSize);
    Window(int windowCap);
    int getSize() const;
    int getDictSize() const;
    int getLabSize() const;
    int getDictCap() const;
    int getLabCap() const;
    void add(char c);
    void add(const char* c, int size);
    void addNoLab(char c);
    void shift(int numSpots);
    int getSplitIndex() const;
    int getHead() const;
    int getTail() const;
    const char& getFromDict(int index) const;
    const char& getFromLab(int index) const;
    char* getFromDictPtr(int index);
    char* getFromLabPtr(int index);
    void print();
    char* getNextInDict(char* c);
    bool atEndOfDict(char* c);
    char* getNext(char* c);
    int getOffset(char* c);
    ~Window();
};