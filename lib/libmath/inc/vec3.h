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
  };
};