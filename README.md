# MPI-Scaffold
Scaffold for a CMake Fabric project for Legion

## Running with ssh

```
ssh legion.rc.ucl.ac.uk
mkdir -p ~/devel/mpi-scaffold
mkdir -p ~/Scratch/Scaffold/output
cd ~/devel/mpi-scaffold
git clone https://github.com/UCL-RITS/Legion-Fabric-Scaffold.git
cd Legion-Fabric-Scaffold
edit subme.sh with your userid instead of mine
./buildme.sh
qsub subme.sh
```

## Running via fabric

```
pip install fabric # You need a working python install
git clone https://github.com/UCL-RITS/Legion-Fabric-Scaffold.git
cd Legion-Fabric-Scaffold
edit legion.py with your userid instead of mine
fab legion.cold
fab legion.sub
fab legion.wait
fab legion.fetch
```
