namespace vec3
{
  template <typename Type>
  struct vec3<Type>
  {
    union
    {
      Type x, y, z;
      Type data[3];
    }

    inline Type & operator[](size_t i);
    inline vec3<Type> & operator-() const;

    inline vec3<Type> & operator*(const Type scalar) const;
    inline vec3<Type> & operator/(const Type scalar) const;

    inline friend vec3<Type> & operator*(const Type scalar, const vec3<Type> vec) const;
    inline friend vec3<Type> & operator/(const Type scalar, const vec3<Type> vec) const;

    inline vec3<Type> & operator+(const vec3<Type> & other) const;
    inline vec3<Type> & operator-(const vec3<Type> & other) const;

    inline vec3<Type> & dot  (const vec3<Type> & other) const;
    inline vec3<Type> & cross(const vec3<Type> & other) const;

    inline friend vec3<Type> & dot  (const vec3<Type> & a, const vec3<Type> & b);
    inline friend vec3<Type> & cross(const vec3<Type> & a, const vec3<Type> & b);
  };

};