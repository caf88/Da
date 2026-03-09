#include "Canvas.h"
#include <iostream>
Canvas::Canvas(int width, int height)
{
    this->width = width;
    this->height = height;
    matrix = new char*[this->height];
    for (int i = 0; i < this->height; ++i) {
        matrix[i] = new char[this->width];
        for (int j = 0; j < this->width; ++j)
            matrix[i][j] = ' ';
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    for (int i = 0; i < ray * 2 + 1; i++)
        for (int j = 0; j < ray * 2 + 1; j++)
        {
            int k = i - ray;
            int l = j - ray;
            if (k * k + l * l <= ray * (ray + 1) && k * k + l * l >= ray * (ray - 1))
                SetPoint(k + x, l + y, ch);
        }
}
 
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    for (int i = 0; i < ray * 2 + 1; i++)
        for (int j = 0; j < ray * 2 + 1; j++)
        {
            int k = i - ray;
            int l = j - ray;
            if (k * k + l * l <= ray * ray + 1)
                SetPoint(k + x, l + y, ch);
        }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    DrawLine(left, top, right, top, ch);
    DrawLine(right, bottom+1, right, top, ch);
    DrawLine(left+1, bottom, right, bottom, ch);
    DrawLine(left, bottom, left, top, ch);  
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int x=left;x<=right;x++)
        for (int y=bottom;y<=top;y++)
            SetPoint(x,y,ch);
}

void Canvas::SetPoint(int x, int y, char ch)
{
    if (x < 0 || x >= width || y < 0 || y >= height) return;
    matrix[y][x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    bool x = false;
    float i, ii, i_dif, j, jj, j_dif;
    if (y2 - y1 > x2 - x1)
    {
        i_dif = y2 - y1;
        i = y1;
        ii = y2;
        j_dif = x2 - x1;
        j = x1;
        jj = x2;
    }
    else 
    {
        x = true;
        i_dif = x2 - x1;
        i = x1;
        ii = x2;
        j_dif = y2 - y1;
        j = y1;
        jj = y2;
    }
    while (i < ii)
    {
        if(x) SetPoint(i, j, ch);
        else SetPoint(j, i, ch);
        if (i_dif / (ii - i) > j_dif / (jj - j)) j++;
        i++;
    }
}

void Canvas::Print()
{
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j)
            std::cout << matrix[i][j];
        std::cout << std::endl;
    }
}

void Canvas::Clear()
{
    for (int i = 0; i < height; ++i)
        for (int j = 0; j < width; ++j)
            matrix[i][j] = ' ';
}


