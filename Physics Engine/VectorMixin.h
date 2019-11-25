#pragma once

#define VECTOR_DECLERATIONS(n)						\
Vector<T, n> Normalize() const;						\
double Length() const;								\
													\
Vector<T, n> Add(Vector<T, n> other) const;			\
Vector<T, n> Subtract(Vector<T, n> other) const;	\
Vector<T, n> Multiply(T other) const;				\
Vector<T, n> Multiply(Vector<T, n> other) const;	\
Vector<T, n> Divide(T other) const;					\
Vector<T, n> DotProduct(Vector<T, n> other) const;	\
T& GetValue(int index);								\
T GetValue(int index) const;						\
													\
/* Operator overloadings */							\
Vector<T, n> operator+ (Vector<T, n> other) const;	\
Vector<T, n> operator- (Vector<T, n> other) const;	\
Vector<T, n> operator* (T other) const;				\
Vector<T, n> operator/ (T other) const;				\
T& operator[] (int index);							\
T operator[] (int index) const;


#define VECTOR_DEFINITIONS(...)																													\
template<typename T __VA_ARGS__> double Physics::Vector<T, n>::Length() const																	\
{																																				\
	T squaredSum = 0;																															\
	for (int x = 0; x < n; ++x)																													\
	{																																			\
		squaredSum += data[x] * data[x];																										\
	}																																			\
	return sqrt(squaredSum);																													\
}																																				\
																																				\
template<typename T __VA_ARGS__> Physics::Vector<T, n> Physics::Vector<T, n>::Add(Physics::Vector<T, n> other) const							\
{																																				\
	Vector<T, n> result = {};																													\
	for (int x = 0; x < n; ++x)																													\
		result[x] = other[x] + data[x];																											\
	return result;																																\
}																																				\
																																				\
template<typename T __VA_ARGS__> Physics::Vector<T, n> Physics::Vector<T, n>::Subtract(Physics::Vector<T, n> other) const						\
{																																				\
	Vector<T, n> result = {};																													\
	for (int x = 0; x < n; ++x)																													\
		result[x] = data[x] - other[x];																											\
	return result;																																\
}																																				\
																																				\
template<typename T __VA_ARGS__> T& Physics::Vector<T, n>::GetValue(int index)																	\
{																																				\
	return data[index];																															\
}																																				\
																																				\
template<typename T __VA_ARGS__> T Physics::Vector<T, n>::GetValue(int index) const																\
{																																				\
	return data[index];																															\
}																																				\
																																				\
template<typename T __VA_ARGS__> Physics::Vector<T, n> Physics::Vector<T, n>::operator+(Physics::Vector<T, n> other) const						\
{																																				\
	return Add(other);																															\
}																																				\
																																				\
template<typename T __VA_ARGS__> Physics::Vector<T, n> Physics::Vector<T, n>::operator-(Physics::Vector<T, n> other) const						\
{																																				\
	return Subtract(other);																														\
}																																				\
																																				\
template<typename T __VA_ARGS__> T& Physics::Vector<T, n>::operator[](int index)																\
{																																				\
	return GetValue(index);																														\
}																																				\
																																				\
template<typename T __VA_ARGS__> T Physics::Vector<T, n>::operator[](int index) const															\
{																																				\
	return GetValue(index);																														\
}																																				\