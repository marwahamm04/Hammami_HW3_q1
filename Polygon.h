#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
public:
    Polygon();
    Polygon(int newWidth, int newHeight);

    virtual int getArea() = 0;
    virtual void draw() = 0;

    void setWidth(int newWidth);
    void setHeight(int newHeight);

protected:
    int width;
    int height;
};

#endif
