#!/usr/bin/env node

const { existsSync, readdirSync, readFileSync, writeFileSync } = require('node:fs');

const PATH = "./test/file/files";
const OUTPUT = "./test/file/bonus";

(function () {
	if (!existsSync(PATH))
		return;

	const files = readdirSync(PATH, { encoding: "utf-8" });

	const contents = files
		.map((filename) => readFileSync(PATH + "/" + filename, { encoding: "utf-8" }))
		.map((content) => content.match(/(.*\n?)/g)?.filter((line) => line !== ""));

	const newContent = [];

	let i = 0;
	while (contents.length) {
		if (i >= contents.length) i = 0;
		if (!contents[i]?.length)
		{
			contents.splice(i, 1);
			continue;
		}
		newContent.push(contents[i]?.shift());
		i++;
	}

	writeFileSync(OUTPUT, newContent.join(""), { encoding: "utf8" });
})();
