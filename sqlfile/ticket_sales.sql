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

 Date: 08/12/2024 11:16:30
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for ticket_sales
-- ----------------------------
DROP TABLE IF EXISTS `ticket_sales`;
CREATE TABLE `ticket_sales`  (
  `airlineno` int(11) NOT NULL,
  `classtype` int(11) NOT NULL,
  `ticket_id` int(11) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`ticket_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 7 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of ticket_sales
-- ----------------------------
INSERT INTO `ticket_sales` VALUES (1001, 3, 1);
INSERT INTO `ticket_sales` VALUES (1001, 3, 2);
INSERT INTO `ticket_sales` VALUES (1001, 2, 3);
INSERT INTO `ticket_sales` VALUES (1001, 1, 4);
INSERT INTO `ticket_sales` VALUES (1002, 3, 5);
INSERT INTO `ticket_sales` VALUES (1003, 2, 6);

SET FOREIGN_KEY_CHECKS = 1;
