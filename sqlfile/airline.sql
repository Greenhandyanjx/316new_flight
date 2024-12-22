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

 Date: 10/12/2024 13:05:08
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for airline
-- ----------------------------
DROP TABLE IF EXISTS `airline`;
CREATE TABLE `airline`  (
  `airlineno` int(11) NOT NULL AUTO_INCREMENT,
  `airwayshortname` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `airplanetype` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `departurecountry` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `departurecity` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `arrivecountry` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `arrivecity` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `departuredate` date NOT NULL,
  `departuretime` time NOT NULL,
  `arrivetime` time NOT NULL,
  `economyclassprice` int(11) NOT NULL,
  `economyclassnum` int(11) NOT NULL,
  `businessclassprice` int(11) NOT NULL,
  `businessclassnum` int(11) NOT NULL,
  `deluxeclassprice` int(11) NOT NULL,
  `deluxeclassnum` int(11) NOT NULL,
  PRIMARY KEY (`airlineno`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 11 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of airline
-- ----------------------------
INSERT INTO `airline` VALUES (1, 'CA123', '波音737', '中国', '北京', '美国', '纽约', '2024-12-11', '08:00:00', '10:00:00', 500, 100, 1000, 50, 1500, 20);
INSERT INTO `airline` VALUES (2, 'CZ456', '空客A320', '中国', '上海', '中国', '广州', '2024-12-12', '09:30:00', '11:00:00', 600, 150, 1200, 80, 1800, 30);
INSERT INTO `airline` VALUES (3, '中国南方航空', '波音777', '中国', '广州', '美国', '洛杉矶', '2024-12-13', '13:00:00', '15:00:00', 3000, 200, 6000, 120, 9000, 40);
INSERT INTO `airline` VALUES (4, 'DL111', '空客A380', '美国', '纽约', '英国', '伦敦', '2024-12-14', '15:00:00', '17:00:00', 4000, 120, 8000, 60, 12000, 10);
INSERT INTO `airline` VALUES (5, 'AF222', '波音737', '法国', '巴黎', '德国', '柏林', '2024-12-15', '17:30:00', '19:00:00', 200, 180, 400, 90, 600, 50);
INSERT INTO `airline` VALUES (6, 'NH333', '空客A330', '日本', '东京', '中国', '北京', '2024-12-16', '19:00:00', '21:00:00', 1000, 130, 2000, 70, 3000, 25);
INSERT INTO `airline` VALUES (7, 'SU444', '波音787', '俄罗斯', '莫斯科', '法国', '巴黎', '2024-12-17', '21:00:00', '23:00:00', 250, 150, 500, 60, 750, 20);
INSERT INTO `airline` VALUES (8, 'AC555', '空客A350', '德国', '柏林', '印度', '孟买', '2024-12-18', '23:30:00', '01:30:00', 500, 140, 1000, 85, 1500, 15);
INSERT INTO `airline` VALUES (9, 'AI666', '波音747', '印度', '孟买', '日本', '东京', '2024-12-19', '06:00:00', '08:00:00', 1500, 160, 3000, 75, 4500, 45);
INSERT INTO `airline` VALUES (10, 'UA777', '空客A380', '美国', '洛杉矶', '美国', '纽约', '2024-12-20', '10:00:00', '12:00:00', 2000, 200, 4000, 100, 6000, 35);

SET FOREIGN_KEY_CHECKS = 1;
