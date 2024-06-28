#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

//抽象クラス
class IShape {
public:
    //面積を計算する仮想関数
    virtual void Size() const = 0;
    //結果を表示する仮想関数
    virtual void Draw() const = 0;
};

//派生クラスCircle
class Circle : public IShape {
private:
    float radius;
    mutable float area;
public:
    Circle(float r) : radius(r), area(0) {}

    //面積を計算
    void Size() const override {
        area = static_cast<float>(M_PI * radius * radius); 
    }
    //描画
    void Draw() const override {
        std::cout << "円の面積は " << area << std::endl;
    }
};

//派生クラスRectangle
class Rectangle : public IShape {
private:
    float width;
    float height;
    mutable float area; 
public:
    Rectangle(float w, float h) : width(w), height(h), area(0) {}
    //面積を計算
    void Size() const override {
        area = width * height; 
    }
    //描画
    void Draw() const override {
        std::cout << "長方形の面積は " << area << std::endl;
    }
};

int main() {
    //クラス生成
    IShape* shape[2];
    shape[0] = new Circle(5.0);           
    shape[1] = new Rectangle(4.0, 6.0);   
    //結果出力
    for (int i = 0; i < 2; ++i) {
        shape[i]->Size();  
        shape[i]->Draw();   
    }

    return 0;
}