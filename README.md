# HPC Backend Stack

## 🚀 Overview
High Performance Computing + Backend PaaS Stack with CUDA, MPI, and cloud integration.

## 🔧 Technologies
- **Languages**: C++17/20, Go 1.24, Python 3.11, Rust 1.91
- **HPC**: CUDA 12.1, OpenMPI, Intel oneAPI
- **Containers**: Docker, Kubernetes
- **Monitoring**: Prometheus, Grafana
- **Databases**: PostgreSQL, Redis

## 📋 Features
- DevContainer configuration for VS Code
- Full GPU support with NVIDIA CUDA
- Distributed computing with MPI
- Kubernetes deployment templates
- Monitoring and observability

## 🚀 Getting Started
```bash
# Clone the repository
git clone https://github.com/R-Meynard/hpc-backend-stack.git

# Start the stack
docker-compose -f docker-compose-mservice-test4.yml up -d

# Open in VS Code
code .
