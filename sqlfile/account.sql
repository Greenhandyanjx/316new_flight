/*
 Navicat Premium Dump SQL

 Source Server         : sqlstudy
 Source Server Type    : MySQL
 Source Server Version : 80040 (8.0.40)
 Source Host           : localhost:3306
 Source Schema         : mydb1

 Target Server Type    : MySQL
 Target Server Version : 80040 (8.0.40)
 File Encoding         : 65001

 Date: 21/12/2024 17:11:40
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for account
-- ----------------------------
DROP TABLE IF EXISTS `account`;
CREATE TABLE `account`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `account` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `password` int UNSIGNED NOT NULL,
  `type` int NOT NULL COMMENT '0是管理者，1是用户',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `account`(`account` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 16 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of account
-- ----------------------------
INSERT INTO `account` VALUES (1, 'user1', 123456, 0);
INSERT INTO `account` VALUES (2, 'admin', 654321, 0);
INSERT INTO `account` VALUES (3, 'guest', 111111, 0);
INSERT INTO `account` VALUES (4, 'overcome', 11223, 0);
INSERT INTO `account` VALUES (5, 'cheft', 123, 0);
INSERT INTO `account` VALUES (6, 'user111', 11223, 1);
INSERT INTO `account` VALUES (7, '54', 999, 1);
INSERT INTO `account` VALUES (8, '55', 999, 1);
INSERT INTO `account` VALUES (15, '56', 999, 1);

SET FOREIGN_KEY_CHECKS = 1;
