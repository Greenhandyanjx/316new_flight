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

 Date: 08/12/2024 11:14:37
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for vi_customer_info
-- ----------------------------
DROP TABLE IF EXISTS `vi_customer_info`;
CREATE TABLE `vi_customer_info`  (
  `customerno` int(11) NOT NULL,
  `customername` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `customertypeno` int(11) NOT NULL,
  `customertypename` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `discountpercent` int(11) NOT NULL,
  `identifynum` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `sex` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `phonenum` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of vi_customer_info
-- ----------------------------
INSERT INTO `vi_customer_info` VALUES (1, '张三', 1, '普通用户', 100, '123456789012345678', '男', '13800138000');
INSERT INTO `vi_customer_info` VALUES (2, '李四', 2, '会员', 90, '123456789012345679', '女', '13800138001');
INSERT INTO `vi_customer_info` VALUES (3, '王五', 3, 'VIP', 80, '123456789012345680', '男', '13800138002');

SET FOREIGN_KEY_CHECKS = 1;
