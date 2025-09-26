-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 05, 2025 at 08:14 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `medistore`
--

-- --------------------------------------------------------

--
-- Table structure for table `medicinelist`
--

CREATE TABLE `medicinelist` (
  `SL_No` int(11) NOT NULL,
  `Name` varchar(255) DEFAULT NULL,
  `Quanty` int(11) NOT NULL,
  `Price` double(10,2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `medicinelist`
--

INSERT INTO `medicinelist` (`SL_No`, `Name`, `Quanty`, `Price`) VALUES
(15, 'napa', 15, 5.00),
(16, 'sergel', 23, 12.00),
(17, 'hexo', 30, 29.00);

-- --------------------------------------------------------

--
-- Table structure for table `passcode`
--

CREATE TABLE `passcode` (
  `id` int(11) DEFAULT NULL,
  `password` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `passcode`
--

INSERT INTO `passcode` (`id`, `password`) VALUES
(223, 3333);

-- --------------------------------------------------------

--
-- Table structure for table `sellmedi`
--

CREATE TABLE `sellmedi` (
  `s_no` int(11) NOT NULL,
  `M_Name` varchar(255) NOT NULL,
  `M_Qty` int(11) NOT NULL,
  `C_name` varchar(255) NOT NULL,
  `C_age` int(11) NOT NULL,
  `C_MOB` varchar(255) NOT NULL,
  `M_Price` double(10,2) NOT NULL,
  `Time` date DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `sellmedi`
--

INSERT INTO `sellmedi` (`s_no`, `M_Name`, `M_Qty`, `C_name`, `C_age`, `C_MOB`, `M_Price`, `Time`) VALUES
(1, 'omidon', 0, '', 77, '', 0.00, '2024-05-12'),
(2, 'omidon', 0, 'h', 88, '987654', 0.00, '2024-05-12'),
(3, 'omidon', 8, 'ff', 44, 'f', 48.00, '2024-05-12'),
(4, 'omidon', 0, 'ff', 44, 'f', 0.00, '2024-05-12'),
(5, 'omidon', 1, 'g', 33, 'd', 6.00, '2024-05-12'),
(6, 'napa', 10, 'nadia', 21, '098642', 30.00, '2024-05-13'),
(7, 'napa', 2, 'mahanur', 30, '1234456789', 10.00, '2024-05-13'),
(8, 'sergel', 2, 'nadia', 23, '2345678902', 24.00, '2024-05-13'),
(9, 'hexo', 2, 'Nadia', 21, '01867383742', 58.00, '2024-06-12'),
(10, 'napa extra', 2, 'nadia', 21, '98029775', 24.00, '2024-06-12');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `medicinelist`
--
ALTER TABLE `medicinelist`
  ADD PRIMARY KEY (`SL_No`),
  ADD UNIQUE KEY `Name` (`Name`);

--
-- Indexes for table `sellmedi`
--
ALTER TABLE `sellmedi`
  ADD PRIMARY KEY (`s_no`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `medicinelist`
--
ALTER TABLE `medicinelist`
  MODIFY `SL_No` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=20;

--
-- AUTO_INCREMENT for table `sellmedi`
--
ALTER TABLE `sellmedi`
  MODIFY `s_no` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
