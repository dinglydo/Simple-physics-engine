#include <gtest/gtest.h>
#include <Vector.h>

/*
=============== VECTOR ADD ===============
*/


TEST(VectorAdd, VectorSimpleAdd)
{
	Physics::Vector<double, 2> vec = {1, 2};
	Physics::Vector<double, 2> vec2 = {2, 1};
	Physics::Vector<double, 2> result = vec.Add(vec2);
	EXPECT_TRUE(result[0] == 3 && result[1] == 3);
}

TEST(VectorAdd, VectorOperatorAdd)
{
	Physics::Vector<double, 2> vec = {1, 2};
	Physics::Vector<double, 2> vec2 = {2, 1};
	Physics::Vector<double, 2> result = vec + vec2;
	EXPECT_TRUE(result[0] == 3 && result[1] == 3);
}

/*
=============== VECTOR SUBTRACT ===============
*/


TEST(VectorSubtract, VectorSimpleSubtract)
{
	Physics::Vec2D vec = {2, 2};
	Physics::Vec2D vec2 = {1, 2};
	Physics::Vec2D result = vec.Subtract(vec2);
	EXPECT_TRUE(result.x == 1 && result.y == 0);
}

TEST(VectorSubtract, VectorOperatorSubtract)
{
	Physics::Vec2D vec = {2, 2};
	Physics::Vec2D vec2 = {1, 2};
	Physics::Vec2D result = vec - vec2;
	EXPECT_TRUE(result.x == 1 && result.y == 0);
}

/*
=============== VECTOR TYPEDEFS ===============
*/

TEST(VectorTypedefs, Vec2D)
{
	Physics::Vec2D vec = {3 ,1};
	EXPECT_TRUE(vec[0] == 3 && vec[1] == 1 && vec.x == 3 && vec.y == 1);
}

TEST(VectorTypedefs, Vec3D)
{
	Physics::Vec3D vec = {3, 1, 2};
	bool checkArray = vec[0] == 3 && vec[1] == 1 && vec[2] == 2;
	bool checkComponent = vec.x == 3 && vec.y == 1 && vec.z == 2;
	EXPECT_TRUE(checkArray && checkComponent);
}

TEST(VectorTypedefs, Vec4D)
{
	Physics::Vec4D vec = {3, 1, 2, 4};
	bool checkArray = vec[0] == 3 && vec[1] == 1 && vec[2] == 2 && vec[3] == 4;
	bool checkComponent = vec.x == 3 && vec.y == 1 && vec.z == 2 && vec.w == 4;
	EXPECT_TRUE(checkArray && checkComponent);
}
