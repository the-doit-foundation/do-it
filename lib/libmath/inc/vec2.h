namespace math
{
  template <typename Type>
  struct vec2<Type>
  {
    union
    {
      Type x, y;
      Type data[2];
    }
  };
}