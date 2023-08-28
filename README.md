# send_bool_boost_mpi

a sample project that send a bool using boost mpi.

## Quick start

* create a conda environment

```bash
conda create --name <env> --file packages.txt
conda activate <env>
```

* cmake build

* run as

```bash
mpiexec -n 2 build/dev-gcc/send_bool
```