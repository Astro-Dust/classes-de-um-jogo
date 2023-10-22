#include <iostream>
#include <map>

class Hero {
    private:
        std::string nome;
        int idade;
        std::string tipoClasse;
        std::map<std::string, std:: string> classeEAtaque;


    public:
        Hero(std::string nome, int idade, std::string tipo) : nome(nome), idade(idade), tipoClasse(tipo) {
            classeEAtaque["Guerreiro"] = "Espada";
            classeEAtaque["Mago"] = "Magia";
            classeEAtaque["Monge"] = "Artes Marciais";
            classeEAtaque["Ninja"] = "Shuriken";
        }

        std::string getNome() {
            return nome;
        }
        void setNome(std::string novoNome) {
            nome = novoNome;
        }

        int getIdade() {
            return idade;
        }
        void setIdade(std::string novaIdade) {
            nome = novaIdade;
        }

        std::string getTipo() {
            return tipoClasse;
        }
        void setTipo(std::string novoTipoClasse) {

            bool encontrada = false;

            std::string classes[] = {"Guerreiro", "Mago", "Monge", "Ninja"};
            
            for(std::string classe : classes) {
                if(novoTipoClasse == classe) {
                    encontrada = true;
                    tipoClasse = novoTipoClasse;
                } 
                if (!encontrada) {
                    std::cout << "Classe não disponível" << std::endl;
                }
            }
        }

        void atacar() {
            if(classeEAtaque.find(tipoClasse) != classeEAtaque.end()) {
                std::cout << "O tipo " << tipoClasse << " atacou usando " << classeEAtaque[tipoClasse] << std::endl;
            }
        }

};
