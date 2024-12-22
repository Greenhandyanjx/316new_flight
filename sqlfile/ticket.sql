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

 Date: 17/12/2024 16:51:42
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for ticket
-- ----------------------------
DROP TABLE IF EXISTS `ticket`;
CREATE TABLE `ticket`  (
  `order_id` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `customer_id` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `customer_name` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `customer_type` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `discount_rate` int(5) NULL DEFAULT NULL,
  `departure_country` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `departure_city` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `arrival_country` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `arrival_city` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `route` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `grade` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `ticket_price` int(10) NULL DEFAULT NULL,
  `total_price` decimal(10, 2) NULL DEFAULT NULL,
  PRIMARY KEY (`order_id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of ticket
-- ----------------------------
INSERT INTO `ticket` VALUES ('21712', '11', 'aaa', '普通客户', 10, '中国', '北京,北京', '美国', '纽约州,纽约', '1,CA123', '568', 1200, 1080.00);
INSERT INTO `ticket` VALUES ('22129', '1', '张三', '普通客户', 10, '中国', '北京,北京', '美国', '纽约州,纽约', '1,CA123', '567', 500, 450.00);
INSERT INTO `ticket` VALUES ('22275', '1', '张三', '普通客户', 10, '美国', '加利福尼亚州,洛杉矶', '美国', '纽约州,纽约', '10,UA777', '567', 2000, 1800.00);
INSERT INTO `ticket` VALUES ('25291', '2', '李四', 'VIP客户', 20, '法国', '法兰西岛,巴黎', '德国', '柏林,柏林', '5,AF222', '567', 200, 160.00);
INSERT INTO `ticket` VALUES ('25293', '2', '李四', 'VIP客户', 20, '法国', '法兰西岛,巴黎', '德国', '柏林,柏林', '5,AF222', '567', 200, 160.00);
INSERT INTO `ticket` VALUES ('25299', '5', '孙七', '普通客户', 10, '法国', '法兰西岛,巴黎', '德国', '柏林,柏林', '5,AF222', '568', 400, 360.00);
INSERT INTO `ticket` VALUES ('25413', '1', '张三', '普通客户', 10, '日本', '东京,东京', '中国', '北京,北京', '6,NH333', '567', 1000, 900.00);
INSERT INTO `ticket` VALUES ('25420', '11', 'aaa', '普通客户', 10, '中国', '北京,北京', '美国', '纽约州,纽约', '1,CA123', '567', 500, 450.00);
INSERT INTO `ticket` VALUES ('25448', '13', 'dadwa', '普通客户', 10, '中国', '北京,北京', '美国', '纽约州,纽约', '1,CA123', '569', 1500, 1350.00);
INSERT INTO `ticket` VALUES ('57942', '12', '奥米希亚', 'VIP客户', 20, '美国', '加利福尼亚州,洛杉矶', '美国', '纽约州,纽约', '4,UA777', '567', 2000, 1600.00);
INSERT INTO `ticket` VALUES ('9594', '10', '刘十二', '贵宾客户', 30, '印度', '马哈拉施特拉邦,孟买', '日本', '东京,东京', '3,AI666', '567', 1500, 1050.00);

SET FOREIGN_KEY_CHECKS = 1;
