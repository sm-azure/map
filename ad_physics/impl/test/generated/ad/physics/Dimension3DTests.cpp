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
#include "ad/physics/Dimension3D.hpp"

class Dimension3DTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::physics::Dimension3D value;
    ::ad::physics::Distance valueLength(0.);
    value.length = valueLength;
    ::ad::physics::Distance valueWidth(0.);
    value.width = valueWidth;
    ::ad::physics::Distance valueHeight(0.);
    value.height = valueHeight;
    mValue = value;
  }

  ::ad::physics::Dimension3D mValue;
};

TEST_F(Dimension3DTests, copyConstruction)
{
  ::ad::physics::Dimension3D value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(Dimension3DTests, moveConstruction)
{
  ::ad::physics::Dimension3D value(std::move(::ad::physics::Dimension3D(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(Dimension3DTests, copyAssignment)
{
  ::ad::physics::Dimension3D value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(Dimension3DTests, moveAssignment)
{
  ::ad::physics::Dimension3D value;
  value = std::move(::ad::physics::Dimension3D(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(Dimension3DTests, comparisonOperatorEqual)
{
  ::ad::physics::Dimension3D valueA = mValue;
  ::ad::physics::Dimension3D valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(Dimension3DTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(Dimension3DTests, comparisonOperatorLengthDiffers)
{
  ::ad::physics::Dimension3D valueA = mValue;
  ::ad::physics::Distance length(1e9);
  valueA.length = length;
  ::ad::physics::Dimension3D valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(Dimension3DTests, comparisonOperatorWidthDiffers)
{
  ::ad::physics::Dimension3D valueA = mValue;
  ::ad::physics::Distance width(1e9);
  valueA.width = width;
  ::ad::physics::Dimension3D valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(Dimension3DTests, comparisonOperatorHeightDiffers)
{
  ::ad::physics::Dimension3D valueA = mValue;
  ::ad::physics::Distance height(1e9);
  valueA.height = height;
  ::ad::physics::Dimension3D valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
