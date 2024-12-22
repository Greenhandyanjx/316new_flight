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

 Date: 16/12/2024 12:42:23
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for city
-- ----------------------------
DROP TABLE IF EXISTS `city`;
CREATE TABLE `city`  (
  `cityno` int(11) NOT NULL,
  `cityname` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `provincename` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `countryno` int(11) NULL DEFAULT NULL,
  PRIMARY KEY (`cityno`) USING BTREE,
  INDEX `countryno`(`countryno` ASC) USING BTREE,
  CONSTRAINT `city_ibfk_1` FOREIGN KEY (`countryno`) REFERENCES `country` (`countryno`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of city
-- ----------------------------
INSERT INTO `city` VALUES (1, '北京', '北京', 1);
INSERT INTO `city` VALUES (2, '上海', '上海', 1);
INSERT INTO `city` VALUES (3, '广州', '广东', 1);
INSERT INTO `city` VALUES (4, '纽约', '纽约州', 2);
INSERT INTO `city` VALUES (5, '洛杉矶', '加利福尼亚州', 2);
INSERT INTO `city` VALUES (6, '伦敦', '英格兰', 3);
INSERT INTO `city` VALUES (7, '东京', '东京', 4);
INSERT INTO `city` VALUES (8, '巴黎', '法兰西岛', 5);
INSERT INTO `city` VALUES (9, '柏林', '柏林', 6);
INSERT INTO `city` VALUES (10, '孟买', '马哈拉施特拉邦', 7);

SET FOREIGN_KEY_CHECKS = 1;
