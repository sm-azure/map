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

#include "ad/map/config/MapEntryValidInputRange.hpp"

TEST(MapEntryValidInputRangeTests, testValidInputRange)
{
  ::ad::map::config::MapEntry value;
  std::string valueFilename{"min"};
  value.filename = valueFilename;
  ::ad::physics::Distance valueOpenDriveOverlapMargin(0.);
  value.openDriveOverlapMargin = valueOpenDriveOverlapMargin;
  ::ad::map::intersection::IntersectionType valueOpenDriveDefaultIntersectionType(
    ::ad::map::intersection::IntersectionType::Unknown);
  value.openDriveDefaultIntersectionType = valueOpenDriveDefaultIntersectionType;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(MapEntryValidInputRangeTests, testValidInputRangeOpenDriveOverlapMarginTooSmall)
{
  ::ad::map::config::MapEntry value;
  std::string valueFilename{"min"};
  value.filename = valueFilename;
  ::ad::physics::Distance valueOpenDriveOverlapMargin(0.);
  value.openDriveOverlapMargin = valueOpenDriveOverlapMargin;
  ::ad::map::intersection::IntersectionType valueOpenDriveDefaultIntersectionType(
    ::ad::map::intersection::IntersectionType::Unknown);
  value.openDriveDefaultIntersectionType = valueOpenDriveDefaultIntersectionType;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(0. - ::ad::physics::Distance::cPrecisionValue);
  value.openDriveOverlapMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MapEntryValidInputRangeTests, testValidInputRangeOpenDriveOverlapMarginTooBig)
{
  ::ad::map::config::MapEntry value;
  std::string valueFilename{"min"};
  value.filename = valueFilename;
  ::ad::physics::Distance valueOpenDriveOverlapMargin(0.);
  value.openDriveOverlapMargin = valueOpenDriveOverlapMargin;
  ::ad::map::intersection::IntersectionType valueOpenDriveDefaultIntersectionType(
    ::ad::map::intersection::IntersectionType::Unknown);
  value.openDriveDefaultIntersectionType = valueOpenDriveDefaultIntersectionType;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.openDriveOverlapMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MapEntryValidInputRangeTests, testValidInputRangeopenDriveOverlapMarginDefault)
{
  ::ad::map::config::MapEntry value;
  ::ad::physics::Distance valueDefault;
  value.openDriveOverlapMargin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MapEntryValidInputRangeTests, testValidInputRangeOpenDriveDefaultIntersectionTypeTooSmall)
{
  ::ad::map::config::MapEntry value;
  std::string valueFilename{"min"};
  value.filename = valueFilename;
  ::ad::physics::Distance valueOpenDriveOverlapMargin(0.);
  value.openDriveOverlapMargin = valueOpenDriveOverlapMargin;
  ::ad::map::intersection::IntersectionType valueOpenDriveDefaultIntersectionType(
    ::ad::map::intersection::IntersectionType::Unknown);
  value.openDriveDefaultIntersectionType = valueOpenDriveDefaultIntersectionType;

  // override member with data type value below input range minimum
  ::ad::map::intersection::IntersectionType invalidInitializedMember(
    static_cast<::ad::map::intersection::IntersectionType>(-1));
  value.openDriveDefaultIntersectionType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MapEntryValidInputRangeTests, testValidInputRangeOpenDriveDefaultIntersectionTypeTooBig)
{
  ::ad::map::config::MapEntry value;
  std::string valueFilename{"min"};
  value.filename = valueFilename;
  ::ad::physics::Distance valueOpenDriveOverlapMargin(0.);
  value.openDriveOverlapMargin = valueOpenDriveOverlapMargin;
  ::ad::map::intersection::IntersectionType valueOpenDriveDefaultIntersectionType(
    ::ad::map::intersection::IntersectionType::Unknown);
  value.openDriveDefaultIntersectionType = valueOpenDriveDefaultIntersectionType;

  // override member with data type value above input range maximum
  ::ad::map::intersection::IntersectionType invalidInitializedMember(
    static_cast<::ad::map::intersection::IntersectionType>(-1));
  value.openDriveDefaultIntersectionType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
