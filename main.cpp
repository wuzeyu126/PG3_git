#include <stdio.h>

// テンプレートクラス Compare の定義
template <typename T1, typename T2>
class Compare
{
public:
	//初期化
	T1 a_ = 0;
	T2 b_ = 0;
	// コンストラクタ
	Compare(T1 a, T2 b) : a_(a), b_(b) {};
	// メンバ関数 min 
	T1 min();
};

//min の定義
template <typename T1, typename T2>
inline T1 Compare<T1, T2>::min()
{
	if (a_ < b_) {
		return static_cast<T1>(a_);
	}
		return static_cast<T1>(b_);
}


int main() {
	//Compare インスタンスを作成
	Compare<int, int> C_int(1, 2);
	Compare<float, float> C_float(1.0f, 2.0f);
	Compare<double, double> C_double(1.0, 2.0);
	Compare<int, float> C_int_float(10, 2.0f);
	Compare<int, double> C_int_double(1, 2.0);
	Compare<float, double> C_float_double(10.0f, 2.0);
	// 結果
	printf("%d(int) & %d(int) ,min =  %d\n", C_int.a_, C_int.b_, C_int.min());
	printf("%lf(float) & %lf(float) ,min =  %lf\n", C_float.a_, C_float.b_, C_float.min());
	printf("%f(double) & %f(double) ,min =  %f\n", C_double.a_, C_double.b_, C_double.min());
	printf("%d(int) & %lf(float) ,min =  %d\n", C_int_float.a_, C_int_float.b_, C_int_float.min());
	printf("%d(int) & %f(double) ,min =  %d\n", C_int_double.a_, C_int_double.b_, C_int_double.min());
	printf("%lf(float) & %f(dluble) ,min =  %lf\n", C_float_double.a_, C_float_double.b_, C_float_double.min());

	return 0;
}