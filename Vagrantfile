Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/bionic64"

  config.vm.provider "virtualbox" do |vbox|
    vbox.memory = (1024 * 4).to_s
    vbox.cpus = 4
  end

  config.vm.network "forwarded_port", guest: 80, host: 8080
end
