
#include <iostream>



// 基本クラス
class Stationery {
public:
    // 仮想関数
    virtual void stationeryName() const {
        std::cout << "文具" << std::endl;
    }

    // 仮想デストラクタ
    virtual ~Stationery() {}
};

// 派生クラス：鉛筆
class Pencil : public Stationery {
public:
    void stationeryName() const override {
        std::cout << "鉛筆" << std::endl;
    }
};

// 派生クラス：消しゴム
class Eraser : public Stationery {
public:
    void stationeryName() const override {
        std::cout << "消しゴム" << std::endl;
    }
};

int main() {
    // 基本クラスのポインタ配列
    Stationery* stationery[2];
    // 鉛筆と消しゴム作成
    stationery[0] = new Pencil();
    stationery[1] = new Eraser();

    // statationeryName関数を呼び出す
    for (int i = 0; i < 2; ++i) {
        stationery[i]->stationeryName();
    }
    // メモリを解放
    for (int i = 0; i < 2; ++i) {
        delete stationery[i];
    }
    return 0;
}