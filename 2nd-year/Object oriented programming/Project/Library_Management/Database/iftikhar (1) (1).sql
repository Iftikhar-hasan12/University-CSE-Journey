-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 08, 2025 at 05:05 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `iftikhar`
--

-- --------------------------------------------------------

--
-- Table structure for table `booklist`
--

CREATE TABLE `booklist` (
  `S_no` int(11) NOT NULL,
  `Book_ID` int(11) DEFAULT NULL,
  `Book_Name` varchar(200) DEFAULT NULL,
  `Authors_Name` varchar(255) DEFAULT NULL,
  `Genre` varchar(255) DEFAULT NULL,
  `Quantitiy` int(11) DEFAULT NULL,
  `Date` date DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `booklist`
--

INSERT INTO `booklist` (`S_no`, `Book_ID`, `Book_Name`, `Authors_Name`, `Genre`, `Quantitiy`, `Date`) VALUES
(27, 3, 'CHE-101', 'Nahid', 'crime', 0, '2024-05-23'),
(29, 5, 'OOP', 'Jargis', 'Programming', 49, '2024-06-12'),
(31, 8, 'ff', 'abc', 'aa', 127, '2024-06-12');

-- --------------------------------------------------------

--
-- Table structure for table `issue`
--

CREATE TABLE `issue` (
  `Book_name` varchar(222) DEFAULT NULL,
  `Book_Id` int(11) NOT NULL,
  `Issued_By` varchar(222) NOT NULL,
  `Issue_Date` date DEFAULT current_timestamp(),
  `Return_Date` date DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `issue`
--

INSERT INTO `issue` (`Book_name`, `Book_Id`, `Issued_By`, `Issue_Date`, `Return_Date`) VALUES
('CHE-101', 3, 'Sumon', '2024-06-12', '2024-06-12');

-- --------------------------------------------------------

--
-- Table structure for table `issue_backup`
--

CREATE TABLE `issue_backup` (
  `Book_name` varchar(222) DEFAULT NULL,
  `Book_Id` int(11) NOT NULL,
  `Issued_By` varchar(222) NOT NULL,
  `Issue_Date` date DEFAULT current_timestamp(),
  `Return_Date` date DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `issue_backup`
--

INSERT INTO `issue_backup` (`Book_name`, `Book_Id`, `Issued_By`, `Issue_Date`, `Return_Date`) VALUES
('CHE-101', 3, 'Sumon', '2024-06-12', NULL),
('OOP', 5, 'Iftikhar', '2024-06-12', '2024-06-12'),
('OOP', 5, 'Sumon', '2024-06-12', '2024-06-12'),
('OOP', 5, 'Zafiya', '2024-06-12', '2025-05-06');

-- --------------------------------------------------------

--
-- Table structure for table `member`
--

CREATE TABLE `member` (
  `S_no` int(11) NOT NULL,
  `S_name` varchar(255) DEFAULT NULL,
  `S_Id` int(11) DEFAULT NULL,
  `Section` varchar(255) DEFAULT NULL,
  `Date` date DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `member`
--

INSERT INTO `member` (`S_no`, `S_name`, `S_Id`, `Section`, `Date`) VALUES
(130, 'Zafiya', 22300, 'D5', '2024-06-12'),
(131, 'Sumon', 22390, 'D1', '2024-06-12'),
(133, 'Iftikhar', 88, 'D6', '2024-06-12');

-- --------------------------------------------------------

--
-- Table structure for table `security`
--

CREATE TABLE `security` (
  `UserID` int(11) NOT NULL,
  `PASSWORD` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `security`
--

INSERT INTO `security` (`UserID`, `PASSWORD`) VALUES
(88, 1436),
(22300, 5555),
(22390, 7062);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `booklist`
--
ALTER TABLE `booklist`
  ADD PRIMARY KEY (`S_no`),
  ADD UNIQUE KEY `Book_Name` (`Book_Name`),
  ADD UNIQUE KEY `Book_ID` (`Book_ID`),
  ADD UNIQUE KEY `Book_Name_2` (`Book_Name`);

--
-- Indexes for table `issue`
--
ALTER TABLE `issue`
  ADD PRIMARY KEY (`Book_Id`,`Issued_By`);

--
-- Indexes for table `issue_backup`
--
ALTER TABLE `issue_backup`
  ADD PRIMARY KEY (`Book_Id`,`Issued_By`);

--
-- Indexes for table `member`
--
ALTER TABLE `member`
  ADD PRIMARY KEY (`S_no`);

--
-- Indexes for table `security`
--
ALTER TABLE `security`
  ADD PRIMARY KEY (`UserID`),
  ADD UNIQUE KEY `PASSWORD` (`PASSWORD`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `booklist`
--
ALTER TABLE `booklist`
  MODIFY `S_no` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=32;

--
-- AUTO_INCREMENT for table `member`
--
ALTER TABLE `member`
  MODIFY `S_no` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=134;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
