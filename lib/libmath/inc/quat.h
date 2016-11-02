namespace math
{
  template <typename Type>
  struct quat<Type>
  {
    union
    {
      Type w, x, y, z;
      Type data[4];
	};
  };
};