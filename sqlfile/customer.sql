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

 Date: 09/12/2024 20:34:18
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for customer
-- ----------------------------
DROP TABLE IF EXISTS `customer`;
CREATE TABLE `customer`  (
  `no` int(11) NOT NULL,
  `name` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `type` int(11) NOT NULL,
  `id` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `sex` varchar(5) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `phone` varchar(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  PRIMARY KEY (`no`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of customer
-- ----------------------------
INSERT INTO `customer` VALUES (1, '张三', 1, '110101199001011234', '男', '13800138000');
INSERT INTO `customer` VALUES (2, '李四', 2, '110102199002022345', '女', '13800138001');
INSERT INTO `customer` VALUES (3, '王五', 1, '110103199003033456', '男', '13800138002');
INSERT INTO `customer` VALUES (4, '赵六', 3, '110104199004044567', '女', '13800138003');
INSERT INTO `customer` VALUES (5, '孙七', 1, '110105199005055678', '男', '13800138004');
INSERT INTO `customer` VALUES (6, '周八', 2, '110106199006066789', '女', '13800138005');
INSERT INTO `customer` VALUES (7, '吴九', 3, '110107199007077890', '男', '13800138006');
INSERT INTO `customer` VALUES (8, '郑十', 1, '110108199008088901', '女', '13800138007');
INSERT INTO `customer` VALUES (9, '钱十一', 2, '110109199009099012', '男', '13800138008');
INSERT INTO `customer` VALUES (10, '刘十二', 3, '110110199010101123', '女', '13800138009');
INSERT INTO `customer` VALUES (11, 'aaa', 1, '123445', '男', '324234');

SET FOREIGN_KEY_CHECKS = 1;
