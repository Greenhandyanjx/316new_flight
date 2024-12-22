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

 Date: 08/12/2024 11:14:52
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for vi_ship_name
-- ----------------------------
DROP TABLE IF EXISTS `vi_ship_name`;
CREATE TABLE `vi_ship_name`  (
  `shipno` int(11) NOT NULL,
  `shipname` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of vi_ship_name
-- ----------------------------
INSERT INTO `vi_ship_name` VALUES (567, 'CZ567');
INSERT INTO `vi_ship_name` VALUES (568, 'MU568');
INSERT INTO `vi_ship_name` VALUES (569, 'CA569');

SET FOREIGN_KEY_CHECKS = 1;
