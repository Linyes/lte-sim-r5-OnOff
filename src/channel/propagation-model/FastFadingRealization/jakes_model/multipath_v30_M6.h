/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010,2011,2012,2013 TELEMATICS LAB, Politecnico di Bari
 *
 * This file is part of LTE-Sim
 *
 * LTE-Sim is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation;
 *
 * LTE-Sim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LTE-Sim; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Giuseppe Piro <g.piro@poliba.it>
 */


#ifndef MULTIPATH_V30_M6_H_
#define MULTIPATH_V30_M6_H_

static float multipath_M6_v_30[3000] = {
 9.88866, 9.23321, 7.96169, 5.52812, -2.28667, 3.80953, 7.10421, 8.66311, 9.47623, 9.80376, 9.73251, 9.26985, 8.35106, 6.77813, 3.89346, -8.10871, 2.77113, 5.43406, 6.54344, 6.87975, 6.61841, 5.72249, 3.8824, -0.459764, -1.53662, 3.3524, 5.20558, 6.05334, 6.2718, 5.94652, 5.00673, 3.11747, -1.38819, -1.95277, 2.73593, 4.54454, 5.36435, 5.55405, 5.18897, 4.18083, 2.13557, -3.17297, -1.58101, 2.42449, 4.06203, 4.77194, 4.84791, 4.32084, 3.00955, 0.115596, -10.2152, 0.909369, 3.52873, 4.8311, 5.45638, 5.59061, 5.2816, 4.4906, 3.05682, 0.464828, -6.76684, -2.48297, 0.44895, 1.30277, 0.983698, -0.795419, -8.59831, -1.30451, 2.27692, 4.12075, 5.18453, 5.72519, 5.82442, 5.47394, 4.56365, 2.73652, -1.72291, -1.95781, 2.83082, 4.83232, 5.90239, 6.41723, 6.49597, 6.15475, 5.32126, 3.75237, 0.522372, -6.71081, 1.84882, 4.33566, 5.64925, 6.37945, 6.72335, 6.76843, 6.55821, 6.11441, 5.44599, 4.55332, 3.42939, 2.05765, 0.400004, -1.64992, -4.47342, -10.5874, -7.87393, -3.62521, -1.20762, 0.607629, 2.06808, 3.24609, 4.16572, 4.83268, 5.24041, 5.36739, 5.16699, 4.54101, 3.25605, 0.541063, -14.0419, 1.15043, 4.04999, 5.59302, 6.46613, 6.86474, 6.84017, 6.35468, 5.24227, 2.94458, -5.07368, 1.72121, 5.12419, 6.83106, 7.8027, 8.29613, 8.3996, 8.12532, 7.41982, 6.11669, 3.69707, -3.4111, 1.39418, 4.73117, 6.19256, 6.83341, 6.89327, 6.39279, 5.16641, 2.53138, -14.3029, 2.51579, 5.40928, 6.85434, 7.5944, 7.83389, 7.62063, 6.89974, 5.44898, 2.4314, -7.18698, 3.25822, 5.83122, 7.11735, 7.7378, 7.86684, 7.5332, 6.65256, 4.91599, 0.941435, -1.1275, 4.38658, 6.52879, 7.6836, 8.2864, 8.48476, 8.3292, 7.81483, 6.87825, 5.34401, 2.67195, -5.05602, 0.203608, 3.25702, 4.50426, 4.96001, 4.87462, 4.31128, 3.23124, 1.46531, -1.51593, -9.114, -5.79143, -3.95513, -5.52422, -11.123, -2.14036, 0.918722, 2.67565, 3.72576, 4.25845, 4.32834, 3.89966, 2.80073, 0.431401, -9.00978, -0.315463, 2.89353, 4.4848, 5.32689, 5.64457, 5.48566, 4.77835, 3.23347, -0.419001, -3.13525, 2.90713, 5.26518, 6.611, 7.40722, 7.81272, 7.88849, 7.64501, 7.04842, 5.99639, 4.21551, 0.68048, -5.11078, 2.23545, 4.50018, 5.6357, 6.17642, 6.28775, 6.01621, 5.33386, 4.11235, 1.95415, -3.19365, -2.24608, 1.96829, 3.76882, 4.72743, 5.19675, 5.30425, 5.09625, 4.57221, 3.68453, 2.30383, 0.0738835, -4.59064, -5.93805, -1.28711, 0.347655, 0.974129, 0.928215, 0.202096, -1.57409, -6.75055, -4.3369, -0.0110718, 2.10814, 3.41869, 4.25199, 4.72892, 4.89109, 4.73096, 4.18616, 3.08685, 0.91529, -5.8704, -0.782956, 2.95791, 4.89085, 6.1006, 6.87247, 7.31628, 7.47528, 7.35505, 6.927, 6.11166, 4.71478, 2.13859, -6.8221, 0.842244, 4.00826, 5.55633, 6.39315, 6.76135, 6.7376, 6.31626, 5.40461, 3.71687, 0.0946485, -3.84845, 2.62816, 4.94344, 6.21281, 6.93063, 7.26475, 7.28234, 7.00243, 6.40793, 5.43596, 3.93174, 1.4571, -4.34874, -2.68156, 0.999249, 2.43545, 3.02501, 3.08737, 2.72743, 1.96422, 0.753765, -1.03756, -3.76891, -8.93055, -11.9187, -8.18492, -8.28139, -10.7822, -24.7068, -11.6719, -11.6227, -15.6694, -6.22445, -2.46471, -0.0202911, 1.73116, 3.01622, 3.94227, 4.56477, 4.9097, 4.98105, 4.75976, 4.19268, 3.15758, 1.3377, -2.54593, -5.5597, 0.305629, 2.46093, 3.6001, 4.18233, 4.36116, 4.19085, 3.67283, 2.75947, 1.32326, -0.973357, -5.50746, -8.55804, -3.79286, -2.7998, -3.44373, -6.73791, -7.76708, -1.93392, 0.623266, 2.17637, 3.16811, 3.76052, 4.0224, 3.97554, 3.60462, 2.84558, 1.53326, -0.823866, -7.3301, -3.44469, 0.149308, 1.81291, 2.70715, 3.11762, 3.13443, 2.75533, 1.88104, 0.188928, -3.76836, -5.26133, 0.291174, 2.67586, 4.1492, 5.14167, 5.8085, 6.21673, 6.39248, 6.33494, 6.01658, 5.36951, 4.23931, 2.20262, -2.9132, -1.37888, 2.96154, 4.98173, 6.18056, 6.89597, 7.24529, 7.26255, 6.92672, 6.1467, 4.67092, 1.58606, -5.98178, 3.05852, 5.71772, 7.1901, 8.06796, 8.53857, 8.67112, 8.47729, 7.91993, 6.88595, 5.06555, 1.19856, -1.96342, 3.95546, 6.10211, 7.22077, 7.77031, 7.89773, 7.64371, 6.9813, 5.79527, 3.75085, -0.602425, -2.64431, 2.35953, 4.05031, 4.65665, 4.52215, 3.60812, 1.39897, -6.9843, 0.423793, 3.75347, 5.3924, 6.27049, 6.63323, 6.55198, 6.00376, 4.8468, 2.6131, -3.60356, -0.170412, 3.45034, 5.02468, 5.74647, 5.88232, 5.47209, 4.38861, 2.11296, -5.38578, 0.477759, 3.86494, 5.46847, 6.29609, 6.6061, 6.47538, 5.88823, 4.72214, 2.58796, -2.47594, -1.9995, 2.12851, 3.6575, 4.18144, 3.97066, 2.94633, 0.482991, -13.1677, 0.401084, 3.35496, 4.78842, 5.4609, 5.56002, 5.08486, 3.84189, 1.02937, -9.3628, 1.96461, 4.66938, 6.04737, 6.73208, 6.89321, 6.54189, 5.54285, 3.38777, -3.65306, 1.76041, 5.3387, 7.09968, 8.09356, 8.59087, 8.68044, 8.36654, 7.57142, 6.05022, 2.88495, -4.52395, 4.24595, 6.78722, 8.13938, 8.89122, 9.23107, 9.23075, 8.90673, 8.23145, 7.1149, 5.32211, 2.04837, -10.0171, 1.92998, 4.26609, 5.27578, 5.61098, 5.45281, 4.83566, 3.68874, 1.75222, -2.01045, -7.74008, -0.852366, 1.09032, 1.88734, 2.07699, 1.8493, 1.30847, 0.554264, -0.262751, -0.906781, -1.11992, -0.816489, -0.169373, 0.556801, 1.16312, 1.53217, 1.58548, 1.23729, 0.332856, -1.52866, -6.27338, -5.71464, -1.29341, 0.479974, 1.23354, 1.24104, 0.420744, -1.87784, -19.5511, -1.27877, 1.84855, 3.51328, 4.45627, 4.88229, 4.83858, 4.26653, 2.92946, -0.0949194, -7.18271, 1.53935, 4.12879, 5.49072, 6.19407, 6.39846, 6.12117, 5.25674, 3.42633, -1.33671, -0.452387, 4.04874, 6.02897, 7.10979, 7.6372, 7.71589, 7.34435, 6.41231, 4.55222, -0.0578268, 0.19732, 4.85133, 6.85907, 7.97068, 8.55781, 8.75039, 8.59148, 8.07188, 7.12499, 5.57255, 2.87291, -4.84731, 0.241008, 3.18784, 4.25935, 4.43609, 3.88322, 2.43934, -0.821577, -7.41384, 0.475199, 2.62636, 3.45293, 3.42695, 2.50641, 0.00144689, -13.8829, 0.802109, 3.65883, 5.09492, 5.78009, 5.87519, 5.3475, 3.91193, 0.190996, -1.57859, 4.12331, 6.45356, 7.77623, 8.52183, 8.83007, 8.73552, 8.19836, 7.06589, 4.85226, -1.55899, 2.44431, 6.08422, 7.76367, 8.63565, 8.97761, 8.86612, 8.27206, 7.0284, 4.55311, -4.35688, 3.34092, 6.49412, 7.99559, 8.74814, 8.98574, 8.76665, 8.0431, 6.60573, 3.67875, -9.11702, 4.03429, 6.6702, 7.95734, 8.56186, 8.66854, 8.31237, 7.4194, 5.71533, 2.06694, -2.21324, 4.24799, 6.37849, 7.38211, 7.72946, 7.53201, 6.73319, 5.01854, 0.844976, -0.146419, 4.97956, 7.08454, 8.23914, 8.85016, 9.0574, 8.90711, 8.38913, 7.42902, 5.81885, 2.86667, -11.983, 2.11666, 4.7728, 5.97755, 6.49446, 6.54055, 6.18632, 5.42888, 4.19222, 2.25536, -1.13787, -18.0446, -2.13402, -0.0391323, 0.64896, 0.648506, 0.221239, -0.418574, -0.961144, -1.00704, -0.353212, 0.788597, 2.05672, 3.21164, 4.14668, 4.82147, 5.21619, 5.30706, 5.04718, 4.33449, 2.91655, -0.0933235, -8.42856, 1.16865, 3.81123, 5.2147, 5.98363, 6.30081, 6.22148, 5.72736, 4.71073, 2.84793, -1.26384, -3.37568, 1.97061, 3.95704, 4.93192, 5.31362, 5.22432, 4.66678, 3.52828, 1.4256, -3.6113, -3.00064, 1.22019, 2.91706, 3.71347, 3.96223, 3.78477, 3.22036, 2.26666, 0.900369, -0.877367, -2.85815, -4.14309, -3.517, -1.59524, 0.391227, 2.01753, 3.23932, 4.08818, 4.59343, 4.7651, 4.58628, 3.99784, 2.85231, 0.733975, -4.48158, -3.35368, 0.702806, 2.30329, 2.94422, 2.90685, 2.17737, 0.423897, -4.21262, -3.73623, 0.770283, 2.61102, 3.46011, 3.63085, 3.13735, 1.71909, -1.93711, -4.15697, 1.6566, 3.91438, 5.10697, 5.65593, 5.6629, 5.0707, 3.57313, -0.299727, -1.52427, 3.9495, 6.25877, 7.59444, 8.37287, 8.73285, 8.71385, 8.28925, 7.34251, 5.52602, 1.25342, 0.366663, 5.41807, 7.50352, 8.64974, 9.25444, 9.44957, 9.27014, 8.68489, 7.56956, 5.55367, 0.868299, 0.709546, 5.29379, 7.15882, 8.10565, 8.50096, 8.45673, 7.97857, 6.97148, 5.12149, 1.04953, -1.16693, 4.26879, 6.31794, 7.37908, 7.88805, 7.99222, 7.74229, 7.13488, 6.11222, 4.51873, 1.90791, -4.13967, -2.56543, 0.744218, 1.68663, 1.52493, 0.288863, -3.05567, -6.91416, -0.365982, 1.90049, 3.02207, 3.47586, 3.38663, 2.72519, 1.26289, -1.95779, -8.32164, -0.334424, 2.07272, 3.28238, 3.84548, 3.92213, 3.53807, 2.61187, 0.850868, -3.00248, -6.0895, -0.227939, 1.87682, 2.94461, 3.43715, 3.50799, 3.2098, 2.54051, 1.44592, -0.214414, -2.81008, -7.88874, -10.4159, -6.72017, -7.04123, -12.3498, -7.53515, -3.32731, -1.20019, 0.0341224, 0.67296, 0.79922, 0.370335, -0.851075, -3.86191, -9.23822, -1.36207, 1.39076, 3.0283, 4.1039, 4.80665, 5.21946, 5.37935, 5.29577, 4.95377, 4.30575, 3.24139, 1.48225, -2.00198, -7.67686, -0.237697, 2.1669, 3.47146, 4.2095, 4.54659, 4.53044, 4.13653, 3.2464, 1.50104, -2.78842, -2.98323, 2.08709, 4.38834, 5.81762, 6.768, 7.3833, 7.7248, 7.81405, 7.64474, 7.17996, 6.33147, 4.88778, 2.18053, -9.87817, 1.63772, 4.64874, 6.19356, 7.07473, 7.52102, 7.61365, 7.36643, 6.73711, 5.59396, 3.55689, -1.20184, -1.09043, 3.44868, 5.3492, 6.35932, 6.84574, 6.93094, 6.64523, 5.95413, 4.73016, 2.59813, -2.23244, -2.43965, 1.97054, 3.65816, 4.39229, 4.51427, 4.0891, 3.01147, 0.826847, -5.43966, -1.77074, 1.86476, 3.48526, 4.27023, 4.492, 4.20601, 3.32577, 1.48991, -3.18528, -2.60666, 1.99295, 4.0269, 5.1884, 5.84848, 6.14424, 6.13212, 5.82704, 5.21069, 4.22107, 2.70775, 0.250607, -5.31252, -4.3077, -0.496304, 0.944848, 1.51211, 1.52902, 1.08299, 0.141644, -1.49179, -4.5778, -17.6728, -4.39695, -1.70387, -0.230833, 0.73453, 1.43536, 1.9883, 2.4555, 2.86695, 3.23026, 3.53737, 3.76974, 3.902, 3.9029, 3.73304, 3.33714, 2.62457, 1.41381, -0.789088, -6.94321, -3.23017, 0.630381, 2.53975, 3.70212, 4.42206, 4.81718, 4.93703, 4.79507, 4.3754, 3.62323, 2.40593, 0.362227, -4.15381, -4.84792, 0.0478426, 2.13508, 3.37393, 4.17143, 4.68277, 4.9817, 5.10516, 5.06807, 4.86745, 4.48035, 3.85379, 2.8757, 1.27776, -1.8773, -9.14459, -0.254546, 2.49963, 4.11874, 5.187, 5.89213, 6.30985, 6.46773, 6.36331, 5.96476, 5.19517, 3.87733, 1.50175, -5.18648, -1.00966, 2.48357, 4.04203, 4.77628, 4.9331, 4.53391, 3.41036, 0.863006, -22.8329, 1.26295, 4.27474, 5.87886, 6.80698, 7.27143, 7.34121, 7.01052, 6.19377, 4.63457, 1.36953, -5.24807, 2.86388, 5.26855, 6.46814, 7.00771, 7.02972, 6.52144, 5.298, 2.63871, -17.3787, 2.9988, 5.90402, 7.41883, 8.25816, 8.62781, 8.58917, 8.12196, 7.10441, 5.15427, 0.357375, 0.919224, 5.40353, 7.32974, 8.36641, 8.86974, 8.95607, 8.64646, 7.88592, 6.48938, 3.8402, -6.1918, 2.73915, 5.73075, 7.14781, 7.84993, 8.07222, 7.89012, 7.3002, 6.2188, 4.39561, 0.908449, -6.91064, 1.49999, 3.5896, 4.41097, 4.52023, 4.04731, 2.94872, 0.960808, -3.0001, -8.69957, -2.61986, -1.83717, -3.74101, -8.58772, -0.137708, 2.94334, 4.79053, 5.97884, 6.70314, 7.04055, 7.00813, 6.57037, 5.60866, 3.78352, -0.401424, -1.87871, 3.28455, 5.28311, 6.28158, 6.67393, 6.56174, 5.9082, 4.48909, 1.40216, -6.09065, 2.79149, 5.33388, 6.656, 7.34344, 7.57376, 7.39772, 6.78916, 5.62105, 3.50167, -1.5477, -0.931506, 3.27722, 4.95336, 5.70491, 5.85999, 5.49023, 4.51917, 2.60922, -1.90655, -2.48092, 2.21556, 4.0403, 4.88869, 5.12449, 4.83331, 3.95251, 2.17882, -1.90304, -3.78987, 1.52185, 3.53022, 4.53252, 4.94811, 4.90671, 4.42693, 3.43447, 1.67611, -1.83348, -8.15564, -0.574306, 1.62543, 2.67253, 3.12979, 3.19204, 2.9545, 2.48025, 1.82859, 1.07136, 0.297102, -0.410456, -1.02861, -1.66559, -2.63669, -4.80971, -20.4343, -2.93733, 0.727712, 3.05051, 4.73501, 6.00055, 6.94155, 7.60288, 8.00268, 8.13887, 7.98723, 7.48903, 6.51307, 4.71781, 0.656192, -1.0915, 4.29989, 6.43586, 7.58936, 8.17505, 8.32025, 8.04218, 7.2662, 5.74142, 2.50298, -3.9618, 4.12277, 6.58545, 7.87014, 8.53361, 8.74478, 8.54842, 7.91003, 6.68365, 4.40717, -1.69517, 1.36557, 5.0106, 6.57407, 7.29008, 7.43788, 7.07608, 6.12623, 4.26244, -0.0583808, -1.28137, 3.65569, 5.51121, 6.34769, 6.53469, 6.13747, 5.02896, 2.64676, -6.20186, 1.53081, 4.69437, 6.18058, 6.88741, 7.03754, 6.66363, 5.65167, 3.55816, -2.36349, 0.790784, 4.57491, 6.26417, 7.10239, 7.3746, 7.14733, 6.3582, 4.73143, 1.07792, -2.49996, 3.72175, 5.91376, 7.02102, 7.51186, 7.52509, 7.07766, 6.08475, 4.26061, 0.438773, -3.74365, 2.35891, 4.1847, 4.76926, 4.46313, 3.05239, -1.22393, -0.66587, 4.19687, 6.37818, 7.62536, 8.30744, 8.54443, 8.3552, 7.67264, 6.2684, 3.29979, -6.14007, 4.27533, 6.91791, 8.28638, 9.00444, 9.25459, 9.0832, 8.44863, 7.17738, 4.68033, -4.38424, 3.53189, 6.69707, 8.24014, 9.06228, 9.40808, 9.35842, 8.91555, 8.00485, 6.39801, 3.27842, -7.57799, 3.67481, 6.18402, 7.40216, 7.97635, 8.09978, 7.83366, 7.16744, 6.01078, 4.09781, 0.416835, -5.73681, 1.49751, 3.51817, 4.36623, 4.57334, 4.29439, 3.55664, 2.29388, 0.280923, -3.27815, -16.4595, -4.38142, -2.68873, -2.55589, -3.4622, -5.56227, -10.0907, -15.2267, -12.3528, -13.6846, -5.53672, -1.9746, 0.294787, 1.85475, 2.92598, 3.6129, 3.96731, 4.0101, 3.73846, 3.12484, 2.10717, 0.561646, -1.77543, -5.60916, -15.029, -16.6038, -8.73368, -3.11314, 0.00849268, 2.06745, 3.4791, 4.41644, 4.95624, 5.12005, 4.87935, 4.12809, 2.56225, -1.07297, -4.03262, 2.08271, 4.40725, 5.68969, 6.38969, 6.65327, 6.51689, 5.94151, 4.77518, 2.53386, -3.87861, 0.0619613, 3.6989, 5.38234, 6.27564, 6.66747, 6.65471, 6.25131, 5.40109, 3.92605, 1.25388, -7.31541, -0.646857, 2.32675, 3.59225, 4.08707, 4.05201, 3.55401, 2.57165, 0.990721, -1.49082, -5.87185, -16.323, -10.3457, -12.1082, -3.84697, -0.450158, 1.59959, 2.89145, 3.62716, 3.86953, 3.58503, 2.59297, 0.231891, -12.6263, 0.372819, 3.53348, 5.19593, 6.13916, 6.57549, 6.55628, 6.02894, 4.77274, 1.94817, -7.26693, 3.24578, 6.05501, 7.61012, 8.54297, 9.05126, 9.20925, 9.03259, 8.48895, 7.47477, 5.71001, 2.1295, -3.11645, 3.8763, 6.07194, 7.12838, 7.55189, 7.48105, 6.91401, 5.70758, 3.34505, -3.97152, 1.35955, 4.70987, 6.23773, 6.97407, 7.17056, 6.88279, 6.04209, 4.3633, 0.604513, -2.52102, 3.46218, 5.63535, 6.75613, 7.28051, 7.34556, 6.96863, 6.06484, 4.34094, 0.548493, -2.56875, 3.40046, 5.58536, 6.73776, 7.31951, 7.47965, 7.25976, 6.63107, 5.46782, 3.3852, -1.542, -1.03376, 3.35867, 5.2274, 6.23886, 6.75923, 6.92282, 6.7834, 6.35197, 5.60287, 4.45716, 2.71535, -0.255723, -10.9996, -1.74516, 1.02732, 2.2916, 2.90053, 3.1004, 2.98765, 2.59525, 1.91102, 0.863541, -0.750315, -3.62216, -19.2681, -3.80022, -0.731267, 1.02748, 2.24317, 3.14882, 3.84305, 4.37378, 4.76531, 5.02926, 5.16951, 5.18435, 5.06702, 4.80478, 4.37626, 3.74533, 2.84711, 1.55059, -0.471287, -4.54566, -7.23851, -1.52514, 0.7076, 2.02323, 2.87918, 3.43908, 3.77528, 3.9196, 3.87954, 3.64228, 3.17043, 2.38493, 1.11162, -1.13669, -7.26382, -3.71493, 0.143587, 2.03554, 3.17311, 3.85447, 4.18577, 4.1983, 3.8742, 3.13564, 1.7774, -0.86351, -12.7309, -1.36801, 1.64551, 3.16263, 3.98299, 4.32547, 4.25227, 3.73857, 2.65, 0.560702, -4.87048, -2.91484, 1.07958, 2.78603, 3.59141, 3.77949, 3.37378, 2.17686, -0.695655, -8.0851, 1.07306, 3.82921, 5.37316, 6.29925, 6.7949, 6.92671, 6.699, 6.05642, 4.83586, 2.53733, -4.10048, 0.17383, 3.73255, 5.3744, 6.22055, 6.54039, 6.40219, 5.75983, 4.39539, 1.47021, -7.80998, 2.60369, 5.3448, 6.84592, 7.74082, 8.23071, 8.39565, 8.26124, 7.81423, 6.9937, 5.64335, 3.30853, -2.60956, -0.0155576, 3.77538, 5.47871, 6.40577, 6.87743, 7.01622, 6.87318, 6.46142, 5.76261, 4.71574, 3.17111, 0.703383, -4.95048, -3.48762, 0.401754, 2.06789, 2.97004, 3.45595, 3.66273, 3.65457, 3.45999, 3.08307, 2.50357, 1.66654, 0.448989, -1.45847, -5.25253, -9.04101, -2.70592, -0.380582, 0.944537, 1.75168, 2.204, 2.36826, 2.26897, 1.90516, 1.25417, 0.267166, -1.14573, -3.15303, -6.10325, -10.8248, -17.452, -12.1026, -6.75951, -3.47263, -1.25452, 0.302933, 1.3883, 2.09668, 2.47447, 2.53601, 2.26654, 1.61275, 0.447781, -1.55735, -5.73146, -8.75578, -3.45705, -1.91819, -1.68444, -2.63204, -5.98911, -7.57899, -1.62059, 0.907256, 2.41188, 3.34027, 3.84993, 4.00254, 3.80993, 3.24144, 2.2048, 0.466323, -2.74625, -18.8389, -3.4465, -1.3581, -0.87816, -1.54227, -3.92483, -16.4518, -2.91622, -0.112562, 1.21762, 1.69335, 1.37211, -0.113695, -5.42166, -1.87773, 2.444, 4.6592, 6.04656, 6.92011, 7.39241, 7.4947, 7.19936, 6.39558, 4.76135, 0.915699, -1.09506, 4.57701, 6.85458, 8.14043, 8.8672, 9.17576, 9.104, 8.62068, 7.59752, 5.64522, 0.809273, 1.54464, 6.01318, 7.96701, 9.04565, 9.60462, 9.76476, 9.55783, 8.95362, 7.83578, 5.8678, 1.57687, -0.182635, 4.90946, 6.79049, 7.66727, 7.93508, 7.69187, 6.89102, 5.27757, 1.7683, -2.91557, 3.8991, 6.1548, 7.29067, 7.81026, 7.86582, 7.48799, 6.61792, 5.04517, 2.02369, -15.3262, 1.73497, 4.20538, 5.23727, 5.49789, 5.11698, 3.97905, 1.47269, -9.94904, 0.957423, 3.94022, 5.37411, 6.06723, 6.23381, 5.91894, 5.05187, 3.35364, -0.361343, -4.05932, 2.12381, 4.25563, 5.30433, 5.74259, 5.71538, 5.2523, 4.29985, 2.67218, -0.238206, -9.9316, -2.38482, 0.0421937, 0.611186, -0.00504023, -2.28015, -24.4656, -1.77188, 1.14499, 2.54417, 3.13128, 3.05054, 2.19663, -0.0266749, -10.6832, -0.1259, 3.13114, 4.82653, 5.78765, 6.24054, 6.2479, 5.77633, 4.65733, 2.3049, -6.64275, 1.45113, 4.76095, 6.45927, 7.4527, 7.99601, 8.18745, 8.06149, 7.61185, 6.7879, 5.45868, 3.26702, -1.37868, -2.66192, 1.9966, 3.6643, 4.36229, 4.47588, 4.11663, 3.28153, 1.85325, -0.557194, -5.94982, -5.56676, -1.72204, -0.37936, 0.0910565, 0.0984117, -0.119087, -0.321623, -0.256215, 0.227348, 1.06662, 2.0606, 3.01923, 3.82126, 4.39774, 4.70114, 4.67803, 4.23652, 3.17137, 0.848761, -9.16537, 0.512405, 3.82407, 5.57699, 6.62096, 7.1924, 7.37179, 7.16581, 6.51299, 5.2267, 2.70098, -6.70106, 1.60526, 4.69005, 6.14181, 6.82922, 6.96549, 6.57401, 5.52187, 3.29362, -3.9931, 1.62824, 5.07839, 6.71529, 7.55935, 7.86152, 7.67868, 6.94619, 5.39283, 1.87259, -2.07438, 4.4512, 6.74279, 7.9317, 8.49529, 8.56739, 8.14668, 7.09396, 4.90667, -1.98631, 3.07729, 6.66489, 8.41271, 9.39683, 9.89557, 10.0068, 9.75172, 9.09134, 7.89477, 5.77874, 0.880886, 1.02213, 5.37737, 7.09895, 7.89456, 8.11091, 7.83863, 7.04231, 5.51842, 2.49771, -10.808, 2.5676, 5.05981, 6.17297, 6.56734, 6.41031, 5.69875, 4.25836, 1.41806, -12.6768, 0.611422, 3.16275, 4.13231, 4.221, 3.48525, 1.50752, -5.09304, -0.311892, 3.28513, 4.93655, 5.72492, 5.89061, 5.43893, 4.14303, 0.960162, -3.79201, 3.47819, 6.00676, 7.40423, 8.19078, 8.53085, 8.47255, 7.99143, 6.96754, 5.03475, 0.44299, 0.266489, 4.92865, 6.84278, 7.82784, 8.25183, 8.22567, 7.75159, 6.72565, 4.80283, 0.363799, -0.461349, 4.37538, 6.28694, 7.24589, 7.6388, 7.58559, 7.10034, 6.1067, 4.35446, 0.898485, -6.32061, 1.76257, 3.86698, 4.69154, 4.74841, 4.08465, 2.39417, -2.16513, -1.59307, 3.05724, 5.10181, 6.24818, 6.86717, 7.0912, 6.96646, 6.48718, 5.59024, 4.09986, 1.46786, -6.45165, -0.668152, 2.47561, 3.89325, 4.59136, 4.84564, 4.76718, 4.4058, 3.77914, 2.87903, 1.66195, 0.00789214, -2.44439, -7.533, -7.36251, -2.79809, -0.629302, 0.853486, 2.0011, 2.92324, 3.6514, 4.18471, 4.50458, 4.5757, 4.33556, 3.66181, 2.26099, -0.957382, -5.52566, 1.75318, 4.40749, 5.97551, 6.97582, 7.58046, 7.85596, 7.81755, 7.43908, 6.63595, 5.19007, 2.38123, -17.2598, 2.26092, 5.08444, 6.49974, 7.24074, 7.51545, 7.38528, 6.83003, 5.72971, 3.71131, -1.04456, -0.974157, 3.53141, 5.37646, 6.31307, 6.70745, 6.68054, 6.26031, 5.40917, 3.99685, 1.65275, -3.29744, -4.5297, -0.453902, 0.47721, -0.0850893, -2.83457, -7.06755, 0.298706, 2.97578, 4.4878, 5.35923, 5.75892, 5.73689, 5.26677, 4.21824, 2.18075, -3.03666, -1.53605, 2.59133, 4.35313, 5.22479, 5.52601, 5.34085, 4.6328, 3.2017, 0.301457, -15.6684, 0.319664, 2.90454, 4.06624, 4.47487, 4.27808, 3.41257, 1.49089, -3.76943, -1.84091, 2.25684, 4.03698, 4.91631, 5.19977, 4.95092, 4.08392, 2.2312, -2.54438, -1.82761, 2.61249, 4.48119, 5.40866, 5.72199, 5.48175, 4.5754, 2.51544, -4.23118, 0.872097, 4.56224, 6.40273, 7.47597, 8.06202, 8.25918, 8.08759, 7.50428, 6.36488, 4.22994, -1.37469, 1.00968, 4.97999, 6.77922, 7.7579, 8.2319, 8.30592, 7.99582, 7.2419, 5.84844, 3.14785, -9.72843, 2.72091, 5.69862, 7.23128, 8.1143, 8.58353, 8.73359, 8.60154, 8.18946, 7.46541, 6.34396, 4.61394, 1.59813, -11.5269, 0.563586, 3.2461, 4.47651, 5.04312, 5.17068, 4.93628, 4.34628, 3.34175, 1.74516, -1.00817, -9.42748, -3.1077, -0.113103, 1.18225, 1.72883, 1.76121, 1.32321, 0.325468, -1.58478, -6.17829, -6.15521, -1.4528, 0.569064, 1.70454, 2.32876, 2.56999, 2.46606, 1.99614, 1.06553, -0.590324, -3.95549, -10.3251, -2.46425, -0.108896, 1.0597, 1.57483, 1.57037, 1.01782, -0.314497, -3.40368, -9.22864, -1.24561, 1.40739, 2.92241, 3.85671, 4.39525, 4.61371, 4.53839, 4.16191, 3.43959, 2.2614, 0.347562, -3.33408, -9.27399, -2.12677, -0.0879309, 0.772938, 0.968169, 0.624763, -0.289648, -2.00756, -5.48644, -12.2193, -4.47018, -2.37753, -1.50442, -1.28447, -1.51499, -2.05539, -2.69704, -3.06314, -2.71541, -1.5861, -0.0499166, 1.51383, 2.91437, 4.08645, 5.01589, 5.70276, 6.14585, 6.3346, 6.24109, 5.80481, 4.89265, 3.15629, -0.911773, -2.1801, 3.17005, 5.41709, 6.72538, 7.51059, 7.91697, 7.99742, 7.755, 7.14511, 6.04251, 4.10044, -0.209533, -1.56182, 3.50928, 5.50845, 6.55641, 7.05697, 7.13945, 6.8307, 6.08041, 4.7116, 2.13859, -6.80464, 0.781701, 3.91323, 5.42197, 6.22301, 6.56822, 6.54905, 6.18776, 5.45442, 4.245, 2.2739, -1.56247, -6.52422, -0.0166789, 1.94551, 2.77661, 2.95951, 2.60864, 1.66871, -0.174504, -4.47401, -5.48831, -0.45222, 1.61198, 2.76338, 3.41617, 3.72292, 3.75024, 3.52296, 3.03544, 2.24649, 1.05108, -0.822255, -4.37444, -10.6028, -2.97483, -0.646835, 0.554508, 1.15865, 1.30545, 0.98674, 0.0399541, -2.13537, -11.479, -2.28504, 1.27144, 3.28314, 4.627, 5.55406, 6.16448, 6.49909, 6.56475, 6.33823, 5.75358, 4.6544, 2.60048, -2.79452, -0.575856, 3.58287, 5.54388, 6.7005, 7.38133, 7.70692, 7.72183, 7.42724, 6.78246, 5.67798, 3.82716, 0.141179, -4.89215, 1.87625, 4.0041, 5.01179, 5.40193, 5.3205, 4.78685, 3.71787, 1.83079, -2.0294, -6.33059, -0.183665, 1.69374, 2.41622, 2.43477, 1.83522, 0.509932, -2.01063, -8.70655, -5.76703, -3.1179, -3.22867, -6.93084, -4.96614, 0.169285, 2.73879, 4.36279, 5.41501, 6.03339, 6.26643, 6.10525, 5.47273, 4.14571, 1.34561, -11.7529, 1.90757, 4.67505, 6.08505, 6.80496, 7.01513, 6.73957, 5.87505, 4.04106, -0.761311, 0.261113, 4.74345, 6.74182, 7.85687, 8.43777, 8.59987, 8.36525, 7.68254, 6.37826, 3.89071, -4.26056, 2.22011, 5.39782, 6.84199, 7.50215, 7.60715, 7.18839, 6.1248, 3.94432, -2.49909, 1.5855, 5.18943, 6.82336, 7.62651, 7.86287, 7.58155, 6.68449, 4.77135, -0.426165, 1.50616, 5.71927, 7.64369, 8.71948, 9.27764, 9.43097, 9.20482, 8.55794, 7.34532, 5.12178, -0.658445, 1.83705, 5.66527, 7.34539, 8.19831, 8.53289, 8.44747, 7.94771, 6.95209, 5.20079, 1.68855, -4.31922, 3.12261, 5.35404, 6.44103, 6.92955, 6.99702, 6.7112, 6.08895, 5.11117, 3.71934, 1.79242, -0.922168, -5.04768, -12.9207, -18.6624, -8.04197, -3.84658, -1.56408, -0.318609, 0.154625, -0.132541, -1.47609, -5.58003, -5.38887, -0.392796, 1.78462, 2.9685, 3.51753, 3.51422, 2.88472, 1.27745, -3.15245, -2.54735, 2.24568, 4.41286, 5.67499, 6.40109, 6.71953, 6.66972, 6.23335, 5.31967, 3.67294, 0.351153, -6.8069, 1.52554, 3.8656, 4.99521, 5.48084, 5.48847, 5.05436, 4.1267, 2.51757, -0.394645, -10.58, -2.34629, 0.0475699, 0.586556, -0.134721, -2.90557, -7.86123, -0.150641, 2.51781, 3.99778, 4.8288, 5.18112, 5.10284, 4.56282, 3.41862, 1.21517, -4.74912, -1.84898, 1.84268, 3.40593, 4.09307, 4.17789, 3.70068, 2.5318, 0.144203, -7.61435, -1.69239, 1.48498, 2.84543, 3.36108, 3.24688, 2.49245, 0.853354, -2.75204, -7.70876, -1.18356, 0.541983, 0.779811, -0.438779, -5.9729, -1.49728, 2.75131, 4.97162, 6.35939, 7.21927, 7.66085, 7.71138, 7.33408, 6.39325, 4.47511, -0.620493, 1.05254, 5.33152, 7.26637, 8.33244, 8.85666, 8.93757, 8.57026, 7.64091, 5.77331, 1.07509, 1.62593, 6.19638, 8.18675, 9.28193, 9.84005, 9.97756, 9.71448, 8.99256, 7.61634, 4.919, -7.83066, 4.41555, 7.33126, 8.76664, 9.5101, 9.78337, 9.65715, 9.12483, 8.09787, 6.31162, 2.7597, -3.37996, 4.01699, 6.12393, 7.02359, 7.22642, 6.83775, 5.76135, 3.52205, -3.28118, 1.31511, 4.77539, 6.32141, 7.04301, 7.19824, 6.83768, 5.87293, 3.94595, -0.76582, -0.616199, 3.87354, 5.68064, 6.53624, 6.78459, 6.50291, 5.61759, 3.7918, -0.655985, -1.04549, 3.73518, 5.68745, 6.69714, 7.14551, 7.15625, 6.75429, 5.89004, 4.3951, 1.73796, -5.83421, -0.994852, 1.92149, 2.88542, 2.84579, 1.83406, -0.899001, -9.88724, 0.364314, 3.00947, 4.32423, 4.9164, 4.9393, 4.37077, 2.97555, -0.269043, -5.49406, 1.88524, 4.30886, 5.56851, 6.18379, 6.30256, 5.93582, 4.96879, 2.9909, -2.29382, -0.346593, 3.78979, 5.64499, 6.64385, 7.10967, 7.1438, 6.74926, 5.83213, 4.08473, 0.171351, -2.24055, 3.43959, 5.63256, 6.84382, 7.52515, 7.83693, 7.84762, 7.58288, 7.03923, 6.18179, 4.92314, 3.04809, -0.144559, -16.3537, -1.13828, 1.42418, 2.62853, 3.25539, 3.55671, 3.65243, 3.61017, 3.46676, 3.23238, 2.88805, 2.37754, 1.58505, 0.258007, -2.37985, -19.6092, -1.59187, 1.5794, 3.42638, 4.65573, 5.48091, 5.98658, 6.20421, 6.13263, 5.73858, 4.93855, 3.53319, 0.912646, -8.38622, -0.437034, 2.56609, 3.91024, 4.45999, 4.40372, 3.70304, 2.0263, -2.39767, -2.18575, 2.59624, 4.66539, 5.80024, 6.36514, 6.46894, 6.10903, 5.16736, 3.24401, -1.80148, -0.339269, 3.95772, 5.87413, 6.91842, 7.42429, 7.49619, 7.13945, 6.26539, 4.58633, 0.91703, -2.78599, 3.49187, 5.70257, 6.83554, 7.36067, 7.41458, 7.00729, 6.03289, 4.12251, -0.583082, -0.202735, 4.36379, 6.32887, 7.40828, 7.97102, 8.14786, 7.98447, 7.47687, 6.56936, 5.11187, 2.67267, -3.05043, -1.58387, 2.09551, 3.46205, 3.92773, 3.79065, 3.10785, 1.78935, -0.52075, -5.53415, -6.57745, -2.66705, -1.91297, -2.82159, -6.86571, -6.09418, -1.24653, 0.844785, 1.89145, 2.2116, 1.8007, 0.299124, -4.57376, -2.18111, 2.33148, 4.5691, 5.96345, 6.85436, 7.36941, 7.55856, 7.42763, 6.94054, 5.99353, 4.31129, 0.859785, -4.71558, 2.63976, 4.97953, 6.1887, 6.79743, 6.96903, 6.7476, 6.10125, 4.89267, 2.69398, -2.85631, -0.905685, 3.0253, 4.71347, 5.55172, 5.85306, 5.7067, 5.09291, 3.8603, 1.48416, -5.94308, -0.363597, 3.03354, 4.66235, 5.5524, 5.97557, 6.02954, 5.73839, 5.07101, 3.91685, 1.96509, -2.06139, -5.22704, 0.467209, 2.42743, 3.33025, 3.60418, 3.34159, 2.45685, 0.537508, -4.92389, -2.1826, 1.97364, 3.99999, 5.2361, 6.00708, 6.43504, 6.56716, 6.40796, 5.92138, 5.00626, 3.39839, 0.133817, -6.51041, 1.73052, 4.27369, 5.67085, 6.48751, 6.902, 6.97585, 6.70913, 6.04082, 4.79491, 2.41802, -5.35256, 0.936812, 4.37826, 6.12456, 7.16767, 7.77771, 8.05958, 8.05413, 7.76501, 7.16107, 6.15792, 4.54771, 1.67095, -10.1084, 0.647859, 3.45513, 4.76979, 5.40422, 5.58875, 5.40538, 4.86997, 3.94715, 2.52844, 0.329058, -3.70041, -9.93229, -3.36476, -2.00343, -2.11213, -3.54997, -8.05198, -7.39604, -2.90007, -1.0896, -0.304159, -0.232319, -0.869713, -2.51615, -6.78798, -7.40793, -2.5798, -0.758563, -0.0455519, -0.171495, -1.33654, -5.01406, -5.69185, -0.138548, 2.33945, 3.85171, 4.8168, 5.38543, 5.61833, 5.52946, 5.09341, 4.22865, 2.72746, -0.0762009, -12.1945, -0.95806, 1.81593, 3.05448, 3.53771, 3.44941, 2.77547, 1.28378, -2.03941, -7.48094, -0.104619, 2.24615, 3.43009, 3.96903, 4.01011, 3.56261, 2.50872, 0.430375, -5.03085, -3.01151, 0.951947, 2.63808, 3.42696, 3.60672, 3.2116, 2.07475, -0.530582, -16.0149, 0.159889, 3.14377, 4.78387, 5.78984, 6.38155, 6.64812, 6.6225, 6.30043, 5.63618, 4.50858, 2.58639, -1.55104, -3.48908, 1.93106, 4.10871, 5.37088, 6.15728, 6.62915, 6.86001, 6.88408, 6.71173, 6.33279, 5.71128, 4.76632, 3.31159, 0.798371, -6.74093, -1.07646, 2.36636, 4.09282, 5.12028, 5.71374, 5.9651, 5.8928, 5.4589, 4.541, 2.79271, -1.32363, -2.39422, 2.8918, 5.14357, 6.46974, 7.28065, 7.71955, 7.83998, 7.64766, 7.105, 6.10595, 4.37177, 0.858622, -4.66572, 2.56371, 4.8253, 5.94144, 6.4286, 6.43072, 5.95468, 4.88038, 2.78527, -2.73292, -0.570727, 3.38687, 5.10818, 5.96368, 6.25917, 6.0744, 5.37062, 3.94499, 1.04179, -13.6753, 1.16698, 3.75805, 4.93762, 5.36544, 5.18221, 4.30868, 2.29309, -3.99995, 0.236032, 3.99153, 5.79065, 6.78542, 7.26158, 7.31064, 6.9339, 6.04282, 4.35645, 0.740338, -3.51628, 3.01078, 5.21693, 6.32377, 6.82074, 6.85732, 6.46595, 5.59713, 4.07483, 1.33262, -7.06154, -1.07235, 1.61187, 2.36317, 1.95539, 0.0343923, -9.35105, -0.0578265, 3.3244, 5.06537, 6.03296, 6.45833, 6.39753, 5.79365, 4.4022, 1.24044, -4.71672, 3.1618, 5.65229, 6.95335, 7.60245, 7.74855, 7.39724, 6.41607, 4.32153, -2.16137, 2.34196, 6.06204, 7.87556, 8.90959, 9.4494, 9.59295, 9.35728, 8.69227, 7.43457, 5.06956, -1.94705, 2.88655
 };

 #endif /* MULTIPATH_V30_M6_H_ */
 
