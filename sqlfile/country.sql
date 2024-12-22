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

 Date: 16/12/2024 12:42:31
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for country
-- ----------------------------
DROP TABLE IF EXISTS `country`;
CREATE TABLE `country`  (
  `countryno` int(11) NOT NULL,
  `countryname` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  PRIMARY KEY (`countryno`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of country
-- ----------------------------
INSERT INTO `country` VALUES (1, '中国');
INSERT INTO `country` VALUES (2, '美国');
INSERT INTO `country` VALUES (3, '英国');
INSERT INTO `country` VALUES (4, '日本');
INSERT INTO `country` VALUES (5, '法国');
INSERT INTO `country` VALUES (6, '德国');
INSERT INTO `country` VALUES (7, '印度');
INSERT INTO `country` VALUES (8, '俄罗斯');
INSERT INTO `country` VALUES (9, '巴西');
INSERT INTO `country` VALUES (10, '加拿大');

SET FOREIGN_KEY_CHECKS = 1;
