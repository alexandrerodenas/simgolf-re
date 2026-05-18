import { defineConfig } from 'vite';
import path from 'path';

export default defineConfig({
    root: 'ui',
    base: './',
    build: {
        outDir: '../dist',
        emptyOutDir: true,
        assetsInlineLimit: 0,
    },
    resolve: {
        alias: {
            '@core': path.resolve(__dirname, 'core'),
            '@view': path.resolve(__dirname, 'view'),
            '@ui': path.resolve(__dirname, 'ui'),
        },
    },
    server: {
        port: 3000,
        open: true,
    },
});
