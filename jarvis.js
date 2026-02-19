const micBtn = document.getElementById("micBtn");
const statusText = document.getElementById("status");

const SpeechRecognition =
  window.SpeechRecognition || window.webkitSpeechRecognition;

const recognition = new SpeechRecognition();
recognition.lang = "en-US";
recognition.continuous = false;
recognition.interimResults = false;

micBtn.onclick = () => {
  recognition.start();
  statusText.innerText = "Status: LISTENING...";
};

recognition.onresult = (event) => {
  const command = event.results[0][0].transcript.toLowerCase();
  statusText.innerText = "You said: " + command;
  processCommand(command);
};

recognition.onerror = (event) => {
  statusText.innerText = "Error: " + event.error;
};

function processCommand(cmd) {
  if (cmd.includes("hello jarvis")) {
    speak("Hello sir, how can I help you?");
  } else {
    speak("Command not recognized");
  }
}

function speak(text) {
  const speech = new SpeechSynthesisUtterance(text);
  window.speechSynthesis.speak(speech);
}
console.log(" Jarvis JS Loaded");