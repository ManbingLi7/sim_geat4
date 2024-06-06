#include "generator.hh"
#include <cassert>

MyPrimaryGenerator::MyPrimaryGenerator()
{
  //1 means: 1 primary vertix per event
  fParticleGun = new G4ParticleGun(1);
}

MyPrimaryGenerator::~MyPrimaryGenerator()
{
  delete fParticleGun;
}


void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{
  G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
  //particleTable->DumpTable();
  //shot a proton
  G4Proton::Definition();
  G4String particleName = "proton";
  G4ParticleDefinition *particle = particleTable->FindParticle("proton");
  assert(particle != nullptr);
  G4ThreeVector pos(0., 0., 0.);
  G4ThreeVector mom(0., 0., 1.);

  fParticleGun->SetParticlePosition(pos);
  fParticleGun->SetParticleMomentumDirection(mom);
  fParticleGun->SetParticleMomentum(100.*GeV);
  fParticleGun->SetParticleDefinition(particle);
  fParticleGun->GeneratePrimaryVertex(anEvent);

}
