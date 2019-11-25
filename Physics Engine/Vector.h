#pragma once
#include <math.h>
#include "VectorMixin.h"

/* Definitions cannot be included in a cpp file since that would require it to be compiled,
which would serve to be useless since templates only generate the necessary functions once called,
and calls only occur once this library has been compiled to a .dll or a .lib */

// Vector definitions and declerations are in the VectorMixin.h file

namespace Physics
{
		template <typename T, int n>
		struct Vector
		{
			T data[n];
			VECTOR_DECLERATIONS(n)
		};

		
		template <typename T>
		struct Vector<T, 4>
		{
			union 
			{
				T data[4];
				struct { T x, y, z, w; };
			};
			VECTOR_DECLERATIONS(4)
		};

		template <typename T>
		struct Vector<T, 3>
		{
			union
			{
				T data[3];
				struct { T x, y, z; };
			};
			VECTOR_DECLERATIONS(3)
		};

		template <typename T>
		struct Vector<T, 2>
		{
			union
			{
				T data[2];
				struct { T x, y; };
			};
			VECTOR_DECLERATIONS(2)
		};

		typedef Vector<double, 2> Vec2D;
		typedef Vector<double, 3> Vec3D;
		typedef Vector<double, 4> Vec4D;
}

// I know that this is a cheap hack, but what can I do?

// It works since the n in the first vector definitions isn't a macro, but in the other definitions it becomes a macro,
// making each function a definition for a template specialization
// And yes, template specializations require new definitions and old ones CANNOT be used. Don't ask me why.

VECTOR_DEFINITIONS(, int n)

#define n 4
VECTOR_DEFINITIONS()
#undef n

#define n 3
VECTOR_DEFINITIONS()
#undef n

#define n 2
VECTOR_DEFINITIONS()
#undef n
