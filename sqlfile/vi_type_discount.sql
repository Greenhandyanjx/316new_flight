/*
 Navicat Premium Dump SQL

 Source Server         : localhost
 Source Server Type    : MySQL
 Source Server Version : 80018 (8.0.18)
 Source Host           : localhost:3306
 Source Schema         : mdb

 Target Server Type    : MySQL
 Target Server Version : 80018 (8.0.18)
 File Encoding         : 65001

 Date: 08/12/2024 11:15:07
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for vi_type_discount
-- ----------------------------
DROP TABLE IF EXISTS `vi_type_discount`;
CREATE TABLE `vi_type_discount`  (
  `customertypename` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `discountpercent` int(11) NOT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of vi_type_discount
-- ----------------------------
INSERT INTO `vi_type_discount` VALUES ('普通用户', 100);
INSERT INTO `vi_type_discount` VALUES ('会员', 90);
INSERT INTO `vi_type_discount` VALUES ('VIP', 80);

SET FOREIGN_KEY_CHECKS = 1;
