namespace math
{
  template <typename Type>
  struct quat<Type>
  {
    union
    {
      Type w, x, y, z;
      Type data[4];
    }
    
    inline Type & operator[](size_t i);
    inline quat<Type> & operator-() const;

    inline quat<Type> & operator*(const Type scalar) const;
    inline quat<Type> & operator/(const Type scalar) const;

    inline friend quat<Type> & operator*(const Type scalar, const quat<Type> vec) const;
    inline friend quat<Type> & operator/(const Type scalar, const quat<Type> vec) const;

    inline quat<Type> & operator+(const quat<Type> & other) const;
    inline quat<Type> & operator-(const quat<Type> & other) const;

    inline quat<Type> & operator*(const quat<Type> & other) const;
    inline friend quat<Type> & operator*(const quat<Type> & a, const quat<Type> & b);
  };
};