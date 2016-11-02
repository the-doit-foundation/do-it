namespace math
{
  template <typename Type>
  struct vec2<Type>
  {
    union
    {
      Type x, y;
      Type data[2];
	};


    inline Type & operator[](size_t i);
    inline vec2<Type> & operator-() const;

    inline vec2<Type> & operator*(const Type scalar) const;
    inline vec2<Type> & operator/(const Type scalar) const;

    inline friend vec2<Type> & operator*(const Type scalar, const vec2<Type> vec) const;
    inline friend vec2<Type> & operator/(const Type scalar, const vec2<Type> vec) const;

    inline vec2<Type> & operator+(const vec2<Type> & other) const;
    inline vec2<Type> & operator-(const vec2<Type> & other) const;

    inline vec2<Type> & dot  (const vec2<Type> & other) const;
    inline vec2<Type> & cross(const vec2<Type> & other) const;

    inline friend vec2<Type> & dot  (const vec2<Type> & a, const vec2<Type> & b);
    inline friend vec2<Type> & cross(const vec2<Type> & a, const vec2<Type> & b);
  };
}