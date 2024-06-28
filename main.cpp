#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

//���󥯥饹
class IShape {
public:
    //��e��Ӌ�㤹�끢���v��
    virtual void Size() const = 0;
    //�Y�����ʾ���끢���v��
    virtual void Draw() const = 0;
};

//�������饹Circle
class Circle : public IShape {
private:
    float radius;
    mutable float area;
public:
    Circle(float r) : radius(r), area(0) {}

    //��e��Ӌ��
    void Size() const override {
        area = static_cast<float>(M_PI * radius * radius); 
    }
    //�軭
    void Draw() const override {
        std::cout << "�Ҥ���e�� " << area << std::endl;
    }
};

//�������饹Rectangle
class Rectangle : public IShape {
private:
    float width;
    float height;
    mutable float area; 
public:
    Rectangle(float w, float h) : width(w), height(h), area(0) {}
    //��e��Ӌ��
    void Size() const override {
        area = width * height; 
    }
    //�軭
    void Draw() const override {
        std::cout << "�L���Τ���e�� " << area << std::endl;
    }
};

int main() {
    //���饹����
    IShape* shape[2];
    shape[0] = new Circle(5.0);           
    shape[1] = new Rectangle(4.0, 6.0);   
    //�Y������
    for (int i = 0; i < 2; ++i) {
        shape[i]->Size();  
        shape[i]->Draw();   
    }

    return 0;
}