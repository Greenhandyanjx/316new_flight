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

 Date: 08/12/2024 11:15:02
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for vi_ticket_max
-- ----------------------------
DROP TABLE IF EXISTS `vi_ticket_max`;
CREATE TABLE `vi_ticket_max`  (
  `max_ticket_num` int(11) NOT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of vi_ticket_max
-- ----------------------------

SET FOREIGN_KEY_CHECKS = 1;
