/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad/physics/Distance3D.hpp"

class Distance3DTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::physics::Distance3D value;
    ::ad::physics::Distance valueX(0.);
    value.x = valueX;
    ::ad::physics::Distance valueY(0.);
    value.y = valueY;
    ::ad::physics::Distance valueZ(0.);
    value.z = valueZ;
    mValue = value;
  }

  ::ad::physics::Distance3D mValue;
};

TEST_F(Distance3DTests, copyConstruction)
{
  ::ad::physics::Distance3D value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(Distance3DTests, moveConstruction)
{
  ::ad::physics::Distance3D value(std::move(::ad::physics::Distance3D(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(Distance3DTests, copyAssignment)
{
  ::ad::physics::Distance3D value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(Distance3DTests, moveAssignment)
{
  ::ad::physics::Distance3D value;
  value = std::move(::ad::physics::Distance3D(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(Distance3DTests, comparisonOperatorEqual)
{
  ::ad::physics::Distance3D valueA = mValue;
  ::ad::physics::Distance3D valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(Distance3DTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(Distance3DTests, comparisonOperatorXDiffers)
{
  ::ad::physics::Distance3D valueA = mValue;
  ::ad::physics::Distance x(1e9);
  valueA.x = x;
  ::ad::physics::Distance3D valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(Distance3DTests, comparisonOperatorYDiffers)
{
  ::ad::physics::Distance3D valueA = mValue;
  ::ad::physics::Distance y(1e9);
  valueA.y = y;
  ::ad::physics::Distance3D valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(Distance3DTests, comparisonOperatorZDiffers)
{
  ::ad::physics::Distance3D valueA = mValue;
  ::ad::physics::Distance z(1e9);
  valueA.z = z;
  ::ad::physics::Distance3D valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
