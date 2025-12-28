#!/bin/bash

set -e

echo "🚀 Début de la restructuration du dépôt..."

# Aller dans le dossier parent (cpp-programming)
cd "$(dirname "$0")/.."

# Création de la nouvelle arborescence
mkdir -p 00_basics
mkdir -p 01_modern_cpp
mkdir -p 02_hpc_foundations
mkdir -p 03_robotics_cpp
mkdir -p 04_interview_preparation
mkdir -p 05_competitive_programming
mkdir -p 06_teaching_material
mkdir -p 07_projects
mkdir -p 30_day_training

echo "📁 Dossiers principaux créés."

###############################################
# 00_basics
###############################################
mv learning_programming/w3schools/cpp_exercises \
   learning_programming/cpp_arrays \
   learning_programming/cpp_program_to_traverse_an_array \
   00_basics/ 2>/dev/null || true

echo "➡️ 00_basics rempli."

###############################################
# 01_modern_cpp
###############################################
mv learning_programming/w3schools/cpp_examples \
   learning_programming/w3schools/cpp_exercises/cpp_memory_management \
   learning_programming/w3schools/cpp_exercises/cpp_pointers \
   cpp_quiz/pointeurs_c_cpp \
   cpp_quiz/quiz_30q_2025_12_01/files_exercises \
   01_modern_cpp/ 2>/dev/null || true

echo "➡️ 01_modern_cpp rempli."

###############################################
# 02_hpc_foundations
###############################################
mv exercices_cpp_pour_FlexAI_Niveau_Debutant \
   entretiens_technique/Synopsys/claude_sonnet_37/HPC_Opti_cpp \
   competitve_programming/HackerRank/problem_solving/algorithms/flatland_space_stations \
   02_hpc_foundations/ 2>/dev/null || true

echo "➡️ 02_hpc_foundations rempli."

###############################################
# 03_robotics_cpp
###############################################
mv cpp-for-Robotics \
   03_robotics_cpp/ 2>/dev/null || true

echo "➡️ 03_robotics_cpp rempli."

###############################################
# 04_interview_preparation
###############################################
mv entretiens_technique \
   cpp_quiz/quiz_12q_2025_12_02 \
   cpp_quiz/quiz_2025_12_04/pointers_references \
   04_interview_preparation/ 2>/dev/null || true

echo "➡️ 04_interview_preparation rempli."

###############################################
# 05_competitive_programming
###############################################
mv competitve_programming \
   05_competitive_programming/ 2>/dev/null || true

echo "➡️ 05_competitive_programming rempli."

###############################################
# 06_teaching_material
###############################################
mv cours_de_soutien \
   06_teaching_material/ 2>/dev/null || true

echo "➡️ 06_teaching_material rempli."

###############################################
# 07_projects
###############################################
echo "➡️ 07_projects prêt."

###############################################
# Nettoyage
###############################################
rm -rf learning_programming 2>/dev/null || true
rm -rf cpp_quiz 2>/dev/null || true

echo "🧹 Nettoyage terminé."

echo "🎉 Restructuration terminée avec succès !"