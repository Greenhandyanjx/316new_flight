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

 Date: 08/12/2024 11:14:47
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for vi_plane_line_info
-- ----------------------------
DROP TABLE IF EXISTS `vi_plane_line_info`;
CREATE TABLE `vi_plane_line_info`  (
  `airplaneno` int(11) NOT NULL,
  `airplanetype` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `airlineno` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `departurecity` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `arrivecity` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `departuredate` date NOT NULL,
  `departuretime` time NOT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of vi_plane_line_info
-- ----------------------------
INSERT INTO `vi_plane_line_info` VALUES (1, '波音737', 'CZ1234', '广州', '北京', '2024-12-09', '08:30:00');
INSERT INTO `vi_plane_line_info` VALUES (2, '空客A320', 'MU5678', '上海', '深圳', '2024-12-10', '14:00:00');
INSERT INTO `vi_plane_line_info` VALUES (3, '波音747', 'CA9012', '成都', '纽约', '2024-12-11', '22:15:00');

SET FOREIGN_KEY_CHECKS = 1;
