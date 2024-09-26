#pragma once

#ifndef SSD_H
#define SSD_H
class SSD
{
private:
    int capacity; // в гигабайтах
    char* brand;

public:
    SSD(int capacity, const char* brand);
    ~SSD();

    int getCapacity() const;
    const char* getBrand() const;

    void setCapacity(int capacity);
    void setBrand(const char* brand);
};

#endif 
