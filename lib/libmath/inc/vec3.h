namespace vec3
{
  template <typename T>
  struct vec3<T>
  {
    union
    {
      T x, y, z;
      T data[3];
	  };

    inline T & operator[](size_t i) { return data[i]; }
    inline vec3<T> & operator-() const { return vec3(-x, -y, -z); }

    inline vec3<T> & operator*(const T s) const { return vec3(s*x, s*y, s*z); }
    inline vec3<T> & operator/(const T s) const { return vec3(s/x, s/y, s/z); }

    inline friend vec3<T> & operator*(const T s, const vec3<T> v) const { return vec3(v.x*s, v.y*s, v.z*s); }
    inline friend vec3<T> & operator/(const T s, const vec3<T> v) const { return vec3(v.x/s, v.y/s, v.z/s); }

    inline vec3<T> & operator+(const vec3<T> & v) const { return vec3(x+v.x, y+v.y, z+v.z); }
    inline vec3<T> & operator-(const vec3<T> & v) const { return vec3(x-v.x, y-v.y, z-v.z); }

    inline T dot  (const vec3<T> & v) const { return x*v.x + y*v.y + z*v.z; }
    inline vec3<T> & cross(const vec3<T> & v) const { return vec3(y * v.z - v.y * z, z * v.x - v.z * x, x * v.y - v.x * y); }

    inline friend T dot  (const vec3<T> & a, const vec3<T> & b) { return a.x*b.x + a.y*b.y + a.z*b.z; }
    inline friend vec3<T> & cross(const vec3<T> & a, const vec3<T> & b) { return vec3(a.y * b.z - b.y * a.z, a.z * b.x - b.z * a.x, a.x * b.y - b.x * a.y); }

    inline vec3<T> & operator*(const mat<row_size, col_size, T> & m) { static_assert(false, "libmath : wrong order for a vec * mat multiplication"); return vec3(); }

    inline T unsqrt_length() { return this.dot(this); }
    inline T length() { return sqrt(this.unsqrt_length()); }
  };

};