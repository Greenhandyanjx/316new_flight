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

 Date: 09/12/2024 13:33:33
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for bookticket
-- ----------------------------
DROP TABLE IF EXISTS `bookticket`;
CREATE TABLE `bookticket`  (
  `booknum` int(11) NOT NULL AUTO_INCREMENT,
  `airlineno` int(11) NOT NULL,
  `shipno` int(11) NOT NULL,
  `ticketprice` int(11) NOT NULL,
  PRIMARY KEY (`booknum`) USING BTREE,
  INDEX `airlineno`(`airlineno` ASC) USING BTREE,
  CONSTRAINT `bookticket_ibfk_1` FOREIGN KEY (`airlineno`) REFERENCES `airline` (`airlineno`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of bookticket
-- ----------------------------

SET FOREIGN_KEY_CHECKS = 1;
