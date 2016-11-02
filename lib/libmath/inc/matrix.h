#include <cstdint>

namespace math
{
	template<int32_t row_size, int32_t col_size, typename Type>
	struct mat<row_size, col_size, Type>
	{
		Type data[row_size * col_size];

		inline Type get(int32_t col, int32_t row)
		{
			return data[row * row_size + col];
		}

		mat<row_size, col_size, Type>& operator+(const mat<row_size, col_size, Type>);
		mat<row_size, col_size, Type>& operator-(const mat<row_size, col_size, Type>);
		mat<row_size, col_size, Type>& operator*(const mat<row_size, col_size, Type>);
		mat<row_size, col_size, Type>& dot(const mat <row_size, col_size, Type>);
		mat<row_size, col_size, Type>& cross(const mat <row_size, col_size, Type>);
		mat<row_size, col_size, Type>& inv();
		mat<row_size, col_size, Type>& transpose();
		mat<row_size, col_size, Type>& determinant();
	};
};